/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:18:08 by namoisan          #+#    #+#             */
/*   Updated: 2023/10/05 15:16:15 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int c;
	int j;

	c = 0;
	while (str[c] != '\0')
	{
		j = 0;
		if (str[c] >= 'a' && str[c] <= 'z')
		{
			j = (str[c] - 'a') + 1;
		}
		else if (str[c] >= 'A' && str[c] <= 'Z')
		{
			j = (str[c] - 'A') + 1;
		}
		else
			write (1, &str[c], 1);
		while (j > 0)
		{
			write (1, &str[c], 1);
			j--;
		}
		c++;
	}
	write (1, "\n", 1);
}

int	main (int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	ft_putstr(argv[1]);
	return (0);
}
