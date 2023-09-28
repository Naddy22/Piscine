/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:11:47 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/28 17:47:07 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	 // Parcours des deux chaînes jusqu'à la fin, jusqu'à ce qu'une différence soit trouvée,
    // ou jusqu'à ce que n caractères aient été comparés.
    while (s1[c] != '\0' && s2[c] != '\0' && c < n && s1[c] == s2[c])
        c++;

    // Comparaison des caractères à la position où la différence a été trouvée ou si n caractères ont été comparés.
    if (s1[c] == s2[c] || c == n)
        return (0); // Les chaînes sont égales jusqu'à n caractères ou jusqu'à la fin de l'une ou des deux chaînes.
    else if (s1[c] < s2[c])
        return (-1); // s1 est "inférieur" à s2 (comparaison lexicographique)
    else
        return (1); // s1 est "supérieur" à s2 (comparaison lexicographique)
}

/*
int main(void)
{
    char s1[] = "abrocadabra";
    char s2[] = "abracodo";

    ft_strncmp(s1, s2, 5);
    printf("%d", ft_strncmp(s1, s2, 5));
    return (0);
}
*/
