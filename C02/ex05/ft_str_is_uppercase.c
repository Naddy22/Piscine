/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:51:23 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/25 12:41:15 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	counter;  // Compteur pour parcourir les caractères de 'str'.

	counter = 0;  // Initialise le compteur à zéro.
	while (str[counter] != '\0')  // Boucle pour parcourir chaque caractère de 'str'.
	{
		if (str[counter] > 64 && str[counter] < 91)  // Vérifie si le caractère est une lettre majuscule (A-Z).
		{
			counter++;  // Passe au caractère suivant si c'est une lettre majuscule.
		}
		else
		{
			return (0);  // Si le caractère n'est pas une lettre majuscule, renvoie 0.
		}
	}
	return (1);  // Si tous les caractères sont des lettres majuscules, renvoie 1.
}

/* Exemple d'utilisation de la fonction ft_str_is_uppercase :
int	main(void)
{
	char str[4];

	str[0] = 'N';
	str[1] = 'A';
	str[2] = 'D';
	str[3] = '\0';
	int result = ft_str_is_uppercase(str);  // Appelle ft_str_is_uppercase pour vérifier la chaîne 'str'.
	printf("%d", result);  // Affiche le résultat (1 si tous les caractères sont des lettres majuscules, sinon 0).
	return (0);
}
*/
