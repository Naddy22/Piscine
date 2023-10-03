/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:57:04 by namoisan          #+#    #+#             */
/*   Updated: 2023/10/03 15:10:39 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0); // Si nb est négatif, le résultat est 0
	if (nb == 0 || nb == 1)
		return (1); // Si nb est égal à 0 ou 1, le résultat est 1

	return (nb * ft_recursive_factorial(nb - 1)); // Appel récursif pour calculer le facteur
}

// int	main(void)
// {
// 	printf("%d", ft_recursive_factorial(4));
// 	return (0);
// }
