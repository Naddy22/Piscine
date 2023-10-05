/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:48:51 by namoisan          #+#    #+#             */
/*   Updated: 2023/10/03 18:24:56 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ulstr(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'A' && str[c] <= 'Z')
		{
			str[c] = str[c] + 32;
			write (1, &str[c], 1);
		}
		else if (str[c] >= 'a' && str[c] <= 'z')
		{
			str[c] = str[c] - 32;
			write (1, &str[c], 1);
		}
		else
			write (1, &str[c], 1);
		c++;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 1)
		write (1, "\n", 1);
	else
	{
		ulstr(argv[1]);
	}
	return (0);
}
