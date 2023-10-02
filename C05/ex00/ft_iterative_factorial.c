/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:19:21 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/30 15:31:26 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	c;

	result = 1;
	c = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (c <= nb)
	{
		result = result * c;
		c++;
	}
	return (result);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(4));
// 	return (0);
// }
