/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:51:23 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/28 17:50:34 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// Fonction qui calcule la longueur d'une chaîne de caractères.
int ft_strlen(char *str)
{
    int c = 0; // Compteur pour parcourir la chaîne.

    while (str[c] != '\0')
    {
        c++; // Incrémente le compteur à chaque caractère rencontré.
    }

    return (c); // Retourne la longueur de la chaîne.
}

/*
int main(void)
{
    char str[] = "Je vais être prise à 42 Quebec";

    printf("%d", ft_strlen(str));
    return (0);
}
*/
