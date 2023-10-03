/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:48:55 by namoisan          #+#    #+#             */
/*   Updated: 2023/10/03 16:56:56 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int *ft_range(int min, int max)
{
	int *result;
	int c;
	int size;

	c = 0;
	size = max - min;

	if (min >= max)
		return (0); // Si min est supérieur ou égal à max, renvoie un pointeur nul

	result = (int *)malloc(size * sizeof(int)); // Allocation de mémoire pour le tableau result

	if (result == NULL)
		return (NULL); // Si l'allocation a échoué, renvoie un pointeur nul

	while (min < max)
	{
		result[c] = min; // Remplissage du tableau result avec les valeurs de min à max
		min++;
		c++;
	}
	return (result); // Renvoie un pointeur vers le tableau result
}
/*
int	main(void)
{
	int c = 0;
	int min = 0;
	int max = 0;
	int *result = ft_range(min, max);

	while (c < (max - min))
	{
		printf("%d ", result[c]);
		c++;
	}
	return (0);
}*/
