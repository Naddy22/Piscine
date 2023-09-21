/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:39:00 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/19 11:33:47 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

/*
int	main(void)
{
	int a;
	int b;

	a = 24;
	b = 42;
	printf("avant nombre 1 = %d et nombre 2 = %d\n", a, b);
	ft_swap(&a, &b);
	printf("après nombre 1 = %d et nombre 2 = %d\n", a, b);
	return (0);
}*/
