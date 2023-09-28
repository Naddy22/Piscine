/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:39:00 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/25 12:06:49 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b; //créer chiffre temporaire pour stocker temporairement la valeur d'un int pointé pour l'échanger
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
	ft_swap(&a, &b); //mettre & pour donner l'adresse au pointeur en paramètre
	printf("après nombre 1 = %d et nombre 2 = %d\n", a, b);
	return (0);
}*/
