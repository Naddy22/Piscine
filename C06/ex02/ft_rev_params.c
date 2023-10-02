/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 13:45:40 by namoisan          #+#    #+#             */
/*   Updated: 2023/10/01 14:18:43 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		write(1, &str[counter], 1);
		counter++;
	}
}

int	main(int argc, char **argv)
{
	int	c;

	c = argc - 1;
	while (c > 0)
	{
		ft_putstr(argv[c]);
		write (1, "\n", 1);
		c--;
	}
	return (0);
}
