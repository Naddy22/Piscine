/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:20:39 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/16 17:46:53 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(char line_f, char line_m, char line_l, int x)
{
	int	counter;

	counter = 2;
	ft_putchar(line_f);
	if (x == 1)
	{
		ft_putchar('\n');
		return ;
	}
	while (counter < x)
	{
		ft_putchar(line_m);
		counter++;
	}
	ft_putchar(line_l);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	counter;

	counter = 2;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	print_line('o', '-', 'o', x);
	if (y == 1)
	{
		return ;
	}
	while (counter < y)
	{
		print_line('|', ' ', '|', x);
		counter++;
	}
	print_line('o', '-', 'o', x);
}
