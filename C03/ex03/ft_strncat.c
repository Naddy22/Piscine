/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:09:13 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/28 17:49:02 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// Fonction qui concatène les n premiers caractères de la chaîne src à la fin de la chaîne dest.
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int d = 0; // Initialisation d'un index pour dest.
    unsigned int s = 0; // Initialisation d'un index pour src.

    // Parcours dest jusqu'à la fin de la chaîne.
    while (dest[d] != '\0')
    {
        d++;
    }

    // Copie des caractères de src à la fin de dest, jusqu'à ce que nb caractères aient été copiés ou jusqu'à la fin de src.
    while (src[s] != '\0' && s < nb)
    {
        dest[d] = src[s];
        s++;
        d++;
    }

    // Ajout du caractère nul pour terminer la nouvelle chaîne concaténée.
    dest[d] = '\0';

    return (dest);
}

/*
int main(void)
{
    char src[12] = "Nadegenette";
    char dest[99] = "Je m'appelle ";

    ft_strncat(dest, src, 6);
    printf("%s", dest);
    return (0);
}
*/
