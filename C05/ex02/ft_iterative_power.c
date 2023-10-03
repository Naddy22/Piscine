/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 09:22:45 by namoisan          #+#    #+#             */
/*   Updated: 2023/10/03 15:15:42 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1; // Initialisez le résultat à 1
	if (power == 0)
		return (1); // Si la puissance est 0, le résultat est 1 (toute valeur à la puissance 0 est 1)
	else if (power < 0)
		return (0); // Si la puissance est négative, le résultat est 0

	while (power > 0)
	{
		result = result * nb; // Multipliez le résultat par nb
		power--; // Décrémentez la puissance
	}
	return (result); // Retournez le résultat final
}
/*
int	main(void)
{
	int nb = 10;
	int power = 5;

	printf("%d", ft_iterative_power(nb, power));
	return 0;
}*/
