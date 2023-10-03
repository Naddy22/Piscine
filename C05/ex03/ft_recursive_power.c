/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 10:23:35 by namoisan          #+#    #+#             */
/*   Updated: 2023/10/03 15:16:25 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1); // Si la puissance est 0, le résultat est 1 (toute valeur à la puissance 0 est 1)
	else if (power < 0)
		return (0); // Si la puissance est négative, le résultat est 0
	else
		return (nb * ft_recursive_power(nb, power - 1)); // Récursion : multipliez nb par le résultat de la puissance nb^(power-1)
}

/*
int	main(void)
{
	int nb = 10;
	int power = 5;

	printf("%d", ft_recursive_power(nb, power));
	return 0;
}*/
