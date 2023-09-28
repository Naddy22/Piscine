/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:02:08 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/27 18:22:29 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(char *str)
{
	int	c;
	int	result;
	int	sign;

	c = 0;
	result = 0;
	sign = 1;
	if (str[c] == 0)
		return (0);
	while (str[c] == ' ' || (str[c] >= 9 && str[c] <= 13))
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
		{
			sign = sign * (-1);
		}
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		result = result * 10 + (str[c] - 48);
		c++;
	}
	return (result * sign);
}
// int	main(int argc, char **argv)
// {
// 	if (argc < 1)
// 	{
// 		return (0);
// 	}
// 	ft_atoi(argv[1]);
// 	printf("%d", ft_atoi(argv[1]));
// 	return (0);
// }
