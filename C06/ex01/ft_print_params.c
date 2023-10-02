/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:16:43 by namoisan          #+#    #+#             */
/*   Updated: 2023/10/02 10:56:17 by namoisan         ###   ########.fr       */
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

	c = 1;
	if (argc < 1)
		return (0);
	while (c < argc)
	{
		ft_putstr(argv[c]);
		write (1, "\n", 1);
		c++;
	}
	return (0);
}
