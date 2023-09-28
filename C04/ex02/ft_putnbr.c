/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:13:53 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/28 17:55:52 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// Fonction qui vérifie si le nombre nb est spécial (cas de -2147483648 ou 0).
int valid(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11); // Affiche "-2147483648" sur la sortie standard.
        return (0); // Retourne 0 pour indiquer que nb est spécial.
    }
    if (nb == 0)
    {
        write(1, "0", 1); // Affiche "0" sur la sortie standard.
        return (0); // Retourne 0 pour indiquer que nb est spécial.
    }
    return (1); // Retourne 1 pour indiquer que nb est un nombre valide.
}

// Fonction qui affiche un entier nb sur la sortie standard.
void ft_putnbr(int nb)
{
    char list[10]; // Tableau de caractères pour stocker les chiffres de nb.
    int c = 0; // Compteur pour parcourir le tableau.

    if (!valid(nb)) // Vérifie si nb est spécial, sinon, ne fait rien.
        return;

    if (nb < 0)
    {
        write(1, "-", 1); // Si nb est négatif, affiche le signe '-'.
        nb = -nb; // Prend la valeur absolue de nb.
    }

    while (nb != 0)
    {
        list[c] = nb % 10 + 48; // Convertit le chiffre en caractère et le stocke dans le tableau.
        nb = nb / 10; // Divise nb par 10 pour passer au chiffre suivant.
        c++; // Incrémente le compteur.
    }

    while (c > 0)
    {
        c--;
        write(1, &list[c], 1); // Affiche chaque chiffre stocké dans le tableau.
    }
}

/*
int main(void)
{
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    ft_putnbr(2147483647);
    write(1, "\n", 1);
    ft_putnbr(0);
    write(1, "\n", 1);
    ft_putnbr(-31156);
    write(1, "\n", 1);
    ft_putnbr(23254);
    write(1, "\n", 1);
    ft_putnbr(-1);
    write(1, "\n", 1);
    ft_putnbr(1);
    write(1, "\n", 1);

    return (0);
}
*/
