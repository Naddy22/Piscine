/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:47:00 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/22 10:06:47 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int counter;

	counter = '0';
	while (counter <= '9')
	{
		write (1, &counter, 1);
		counter++;
	}
}
int	main(void)
{
	ft_print_numbers();
	return (0);
}
