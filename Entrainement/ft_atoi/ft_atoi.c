/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:07:45 by namoisan          #+#    #+#             */
/*   Updated: 2023/10/05 16:31:38 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int	ft_atoi(const char *str)
{
	int c;
	int result;
	int sign;

	c = 0;
	sign = 1;
	result = 0;
	if (str[c] == '\0')
		return (0);
	if (str[0] == '-')
		{
			sign = sign * (-1);
			c++;
		}
	while (str[c] != '\0' && str[c] >= '0' && str[c] <= '9')
	{
		if (str[c] >= '0' && str[c] <= '9')
		{
			result = result * 10 + (str[c] - 48);
		}
		c++;
	}
	return (result * sign);
}

// int	main(void)
// {
// 	char str[] = "  45-446";
// 	printf("%d\n", atoi(str));
// 	printf("%d", ft_atoi(str));
// 	return (0);
// }
