/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:30:09 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/25 12:55:19 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowercase(char *str)
{
	int	counter;  // Compteur pour parcourir les caractères de 'str'.

	counter = 0;  // Initialise le compteur à zéro.
	while (str[counter] != '\0')  // Boucle pour parcourir chaque caractère de 'str'.
	{
		if (str[counter] > 64 && str[counter] < 91)  // Vérifie si le caractère est une lettre majuscule (A-Z).
		{
			str[counter] += 32;  // Convertit la lettre majuscule en minuscule en modifiant la valeur ASCII.
		}
		counter++;  // Passe au caractère suivant.
	}
	return (str);
}

/* Exemple d'utilisation de la fonction ft_strlowercase :
int main(void)
{
	char str[] = "JE SUIS 4 POISSONS BLOB";
	ft_strlowercase(str);  // Convertit les lettres majuscules en minuscules dans la chaîne 'str'.
	printf("%s", str);  // Affiche la chaîne 'str' modifiée.
	return (0);
}
*/
