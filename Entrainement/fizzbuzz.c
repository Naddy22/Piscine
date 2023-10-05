/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 09:33:10 by namoisan          #+#    #+#             */
/*   Updated: 2023/10/05 11:20:40 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putnbr(int nb)
{
	char list[10];
	int c;

	c = 0;
	while (nb != 0)
	{
		list[c] = nb % 10 + 48;
		nb = nb / 10;
		c++;
	}
	while (c > 0)
	{
		c--;
		write (1, &list[c], 1);
	}
}

void	fizzbuzz(void)
{
	int nb;

	nb = 1;
	while (nb <= 100)
	{
		if (nb % 3 == 0)
		{
			write (1, "fizz", 4);
		}
		if (nb % 5 == 0)
		{
			write (1, "buzz", 4);
		}
		if (nb % 3 != 0 && nb % 5 != 0)
			ft_putnbr(nb);
		write (1, "\n", 1);
		nb++;
	}
}

int	main(void)
{
	fizzbuzz();
	return (0);
}
