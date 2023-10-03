/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:33:06 by namoisan          #+#    #+#             */
/*   Updated: 2023/10/03 16:57:42 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int c;
	int size;

	c = 0;
	size = max - min;

	if (min >= max)
	{
		*range = NULL; // Si min est supérieur ou égal à max, assigne NULL au pointeur range
		return (0);
	}

	*range = (int *)malloc(size * sizeof(int)); // Allocation de mémoire pour le tableau pointé par range

	if (*range == NULL)
		return (-1); // Si l'allocation de mémoire échoue, renvoie -1

	while (min < max)
	{
		(*range)[c] = min; // Remplissage du tableau pointé par range avec les valeurs de min à max
		min++;
		c++;
	}

	return (size); // Renvoie la taille du tableau alloué
}

/*
int	main(void)
{
	int	size;
	int *ptr;

	size = ft_ultimate_range(&ptr, 10, 20);
	printf("%d", size);
	return (0);
}*/
