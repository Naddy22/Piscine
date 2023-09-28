/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:41:32 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/25 12:22:15 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* La fonction ft_strncpy copie au maximum 'n' caractères de la chaîne source 'src' dans la chaîne de destination 'dest'. */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int counter;  // Compteur pour parcourir les caractères de 'src'.

	counter = 0;  // Initialise le compteur à zéro.
	while (counter < n && src[counter] != '\0')  // Boucle pour copier au maximum 'n' caractères de 'src' à 'dest'.
	{
		dest[counter] = src[counter];  // Copie le caractère actuel de 'src' dans 'dest'.
		counter++;  // Incrémente le compteur pour passer au caractère suivant.
	}
	while (counter < n)  // Boucle pour remplir les caractères restants de 'dest' avec '\0'.
	{
		dest[counter] = '\0';  // Remplace le caractère actuel de 'dest' par '\0'.
		counter++;  // Incrémente le compteur pour passer au caractère suivant.
	}
	return (dest);  // Retourne 'dest' qui contient la copie de 'src' avec une longueur maximale de 'n' caractères.
}

int	main(void)
{
	char src[8] = "BLOBLOB";  // Chaîne source 'src'.
	char dest[6] = "Pafpa";  // Chaîne de destination 'dest'.

	ft_strncpy(dest, src, 4);  // Appelle ft_strncpy pour copier au maximum 4 caractères de 'src' à 'dest'.
	printf("%s", dest);  // Affiche la chaîne résultante dans 'dest'.
	return (0);
}
