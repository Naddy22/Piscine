/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:20:11 by namoisan          #+#    #+#             */
/*   Updated: 2023/10/05 15:47:10 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_print(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
		c++;
	while (c > 0)
	{
		c--;
		write (1, &str[c], 1);
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rev_print(argv[1]);
	}
	else
		write (1, "\n", 1);
	return (0);
}
