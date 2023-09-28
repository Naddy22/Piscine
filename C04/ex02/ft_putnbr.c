/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:13:53 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/28 09:20:27 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
int	valid(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (0);
	}
	if (nb == 0)
	{
		write (1, "0", 1);
		return (0);
	}
	return (1);
}

void	ft_putnbr(int nb)
{
	char	list[10];
	int		c;

	c = 0;
	if (!valid(nb))
		return ;
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
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
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
		ft_putnbr(2147483647);
		write(1, "\n", 1);
			ft_putnbr(0);
			write(1, "\n", 1);
				ft_putnbr(-31156);
				write(1, "\n", 1);
					ft_putnbr(23254);
					write(1, "\n", 1);
							ft_putnbr(-1);
							write(1, "\n", 1);
									ft_putnbr(1);
									write(1, "\n", 1);

	return (0);
}*/
