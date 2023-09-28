/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:01:59 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/25 12:04:29 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

void	ft_ft(int *nbr)
{
	*nbr = 42; //la on change la valeur du int pointé par *nbr en lui donnant la valeur 42
}
/*
int	main(void)
{
	int i;

	i = 0;
	ft_ft(&i);
	write(1, &i, 1);
	return (0);
}*/
