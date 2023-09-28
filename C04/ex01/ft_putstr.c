/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:46:15 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/27 17:38:30 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putstr(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		write (1, &str[c], 1);
		c++;
	}
	str[c] = '\0';
}
/*
int	main(void)
{
	char str[] = "Poupoupidou POU!";

	ft_putstr(str);
	return (0);
}*/
