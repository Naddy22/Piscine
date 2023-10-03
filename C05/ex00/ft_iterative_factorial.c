/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:19:21 by namoisan          #+#    #+#             */
/*   Updated: 2023/10/03 15:09:55 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result; // Variable pour stocker le résultat
	int	c; // Compteur pour la boucle

	result = 1; // Initialisation du résultat à 1
	c = 1; // Initialisation du compteur à 1

	if (nb < 0)
		return (0); // Si nb est négatif, le résultat est 0
	if (nb == 0)
		return (1); // Si nb est égal à 0, le résultat est 1

	while (c <= nb) // Boucle pour calculer le facteur
	{
		result = result * c; // Multiplication du résultat par le compteur
		c++; // Incrémentation du compteur
	}

	return (result); // Retourne le résultat du calcul du facteur
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(4));
// 	return (0);
// }
