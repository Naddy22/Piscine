/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:07:43 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/28 17:48:04 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// Fonction qui concatène la chaîne src à la fin de la chaîne dest.
char *ft_strcat(char *dest, char *src)
{
    int d = 0; // Initialisation d'un index pour dest.
    int s = 0; // Initialisation d'un index pour src.

    // Parcours dest jusqu'à la fin de la chaîne.
    while (dest[d] != '\0')
    {
        d++;
    }

    // Copie des caractères de src à la fin de dest.
    while (src[s] != '\0')
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
    char src[7] = "Nadège";
    char dest[99] = "Je m'appelle ";

    ft_strcat(dest, src);
    printf("%s", dest);
    return (0);
}
*/
