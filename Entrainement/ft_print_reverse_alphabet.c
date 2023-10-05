/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:40:59 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/22 09:46:36 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	counter;

	counter = 'z';
	while (counter > 96)
	{
		write (1, &counter, 1);
		counter--;
	}
}
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
