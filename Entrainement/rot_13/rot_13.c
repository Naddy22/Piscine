/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:51:26 by namoisan          #+#    #+#             */
/*   Updated: 2023/10/04 16:58:58 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'A' && str[c] <= 'M')
		{
			str[c] += 13;
			write (1, &str[c], 1);
		}
		else if (str[c] >= 'M' && str[c] <= 'Z')
		{
			str[c] -= 13;
			write (1, &str[c], 1);
		}
		else if (str[c] >= 'a' && str[c] <= 'm')
		{
			str[c] += 13;
			write (1, &str[c], 1);
		}
		else if (str[c] >= 'm' && str[c] <= 'z')
		{
			str[c] -= 13;
			write (1, &str[c], 1);
		}
		else
			write (1, &str[c], 1);
		c++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstr(argv[1]);
	}
	else
		write (1, "\n", 1);
	return (0);
}
