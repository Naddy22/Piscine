/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:10:07 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/25 12:16:54 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

/* La fonction ft_strcpy copie le contenu de la chaîne source 'src' dans la chaîne de destination 'dest'. */

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;  // Crée un compteur pour parcourir les caractères des chaînes.

	counter = 0;  // Initialise le compteur à zéro.
	while (src[counter] != '\0')  // Démarre une boucle tant que le caractère actuel de 'src' n'est pas '\0' (fin de chaîne).
	{
		dest[counter] = src[counter];  // Copie le caractère actuel de 'src' dans 'dest'.
		counter++;  // Incrémente le compteur pour passer au caractère suivant.
	}
	dest[counter] = '\0';  // Ajoute le caractère nul '\0' à la fin de 'dest' pour marquer la fin de la chaîne.
	return (dest);  // Retourne 'dest' qui contient maintenant la copie de 'src'.
}

/* Exemple d'utilisation de la fonction ft_strcpy :
int	main(void)
{
	char src[9] = "BLOBBLOB";
	char dest[7] = "Nadege";

	ft_strcpy(dest, src);  // Appelle ft_strcpy pour copier 'src' dans 'dest'.
	printf("%s", dest);  // Affiche la chaîne résultante dans 'dest'.
	return (0);
}
*/
