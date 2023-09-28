/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:46:15 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/28 17:54:34 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// Fonction qui affiche une chaîne de caractères sur la sortie standard.
void ft_putstr(char *str)
{
    int c = 0; // Compteur pour parcourir la chaîne.

    while (str[c] != '\0')
    {
        write(1, &str[c], 1); // Écrit le caractère courant sur la sortie standard.
        c++; // Incrémente le compteur pour passer au caractère suivant.
    }
}

/*
int main(void)
{
    char str[] = "Poupoupidou POU!";

    ft_putstr(str);
    return (0);
}
*/
