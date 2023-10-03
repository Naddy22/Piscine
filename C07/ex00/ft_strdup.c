/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:22:38 by namoisan          #+#    #+#             */
/*   Updated: 2023/10/03 16:56:09 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

char *ft_strdup(char *src)
{
	int size;
	int c;
	char *dest;

	size = 0;
	c = 0;

	if (src == 0)
		return (0); // Si src est nul, la fonction renvoie également un pointeur nul

	while (src[size] != '\0')
		size++; // Calcul de la taille de la chaîne src

	dest = (char *)malloc((size + 1) * sizeof(char)); // Allocation de mémoire pour la chaîne de destination (dest)

	if (dest == NULL)
		return (NULL); // Si l'allocation a échoué, renvoie un pointeur nul

	while (src[c] != '\0')
	{
		dest[c] = src[c]; // Copie des caractères de src vers dest
		c++;
	}
	dest[c] = '\0'; // Ajout du caractère nul à la fin de la chaîne de destination

	return (dest); // Renvoie un pointeur vers la nouvelle chaîne de caractères dupliquée
}

/*
int	main(void)
{
	char src[] = "Viva la vida";

	printf("%s", ft_strdup(src));
	return (0);
}*/
