/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:38:26 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/28 17:44:47 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int counter;

    counter = 0;
    // Parcours des deux chaînes jusqu'à la fin ou jusqu'à ce qu'un caractère différent soit trouvé.
    while (s1[counter] != '\0' && s2[counter] != '\0' && s1[counter] == s2[counter])
        counter++;

    // Comparaison des caractères à la position où la différence a été trouvée.
    if (s1[counter] > s2[counter])
        return (1); // s1 est plus grand que s2
    else if (s1[counter] == '\0' && s2[counter] == '\0')
        return (0); // Les chaînes sont identiques
    else
        return (-1); // s1 est plus petit que s2
}

/*
int main(void)
{
    char s1[] = "carotte";
    char s2[] = "crocodile";

    ft_strcmp(s1, s2);
    printf("%d", ft_strcmp(s1, s2));
    return (0);
}
*/
