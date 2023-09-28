/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:02:08 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/28 17:56:53 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// Fonction qui convertit une chaîne de caractères str en un entier de type int.
int ft_atoi(char *str)
{
    int c = 0;      // Index pour parcourir la chaîne.
    int result = 0; // Variable pour stocker le résultat de la conversion.
    int sign = 1;   // Variable pour gérer le signe du nombre (positif par défaut).

    if (str[c] == 0)
        return (0); // Si la chaîne est vide, retourne 0.

    // Ignore les espaces et les caractères de tabulation et de retour à la ligne.
    while (str[c] == ' ' || (str[c] >= 9 && str[c] <= 13))
        c++;

    // Gère le signe du nombre.
    while (str[c] == '+' || str[c] == '-')
    {
        if (str[c] == '-')
        {
            sign = sign * (-1); // Si le signe est négatif, met sign à -1.
        }
        c++;
    }

    // Convertit les chiffres en entier.
    while (str[c] >= '0' && str[c] <= '9')
    {
        result = result * 10 + (str[c] - 48); // Met à jour result en ajoutant le chiffre converti.
        c++;
    }

    return (result * sign); // Retourne le résultat avec le signe approprié.
}

/*
int main(int argc, char **argv)
{
    if (argc < 1)
    {
        return (0);
    }
    ft_atoi(argv[1]);
    printf("%d", ft_atoi(argv[1]));
    return (0);
}
*/
