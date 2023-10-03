/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:14:41 by namoisan          #+#    #+#             */
/*   Updated: 2023/10/03 16:59:21 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

char *ft_strcat(char *dest, char *src)
{
	int d;
	int s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
		d++;
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}

char *check(void)
{
	char *result;

	result = malloc(1); // Alloue de la mémoire pour un caractère
	result[0] = '\0';   // Initialise la chaîne de caractères vide
	return (result);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int resultsize;
	int c;
	char *result;

	resultsize = 0;
	c = 0;
	if (size == 0)
		return (check()); // Si size est 0, renvoie une chaîne de caractères vide
	while (c < size)
	{
		resultsize = resultsize + ft_strlen(strs[c++]); // Calcule la taille totale du résultat
		if (c < size)
			resultsize = resultsize + ft_strlen(sep); // Ajoute la taille du séparateur
	}
	result = (char *)malloc((resultsize + 1) * sizeof(char)); // Alloue de la mémoire pour le résultat
	c = 0;
	result[0] = '\0'; // Initialise la chaîne de caractères vide
	while (c < size)
	{
		ft_strcat(result, strs[c++]); // Concatène la chaîne de caractères actuelle
		if (c < size)
			ft_strcat(result, sep); // Concatène le séparateur
	}
	return (result);
}
/*
int main(void)
{
	char *strs[] = {"Je", "suis", "un", "orteil"};
	char sep[] = ">>";

	printf("%s", ft_strjoin(4, strs, sep)); // Affiche le résultat de ft_strjoin
	return (0);
}*/
