/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:32:37 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/25 12:35:41 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	counter;  // Compteur pour parcourir les caractères de 'str'.

	counter = 0;  // Initialise le compteur à zéro.
	while (str[counter] != '\0')  // Boucle pour parcourir chaque caractère de 'str'.
	{
		if (str[counter] > 96 && str[counter] < 123)  // Vérifie si le caractère est une lettre minuscule (a-z).
		{
			counter++;  // Passe au caractère suivant si c'est une lettre minuscule.
		}
		else
		{
			return (0);  // Si le caractère n'est pas une lettre minuscule, renvoie 0.
		}
	}
	return (1);  // Si tous les caractères sont des lettres minuscules, renvoie 1.
}

/* Exemple d'utilisation de la fonction ft_str_is_lowercase :
int	main(void)
{
	char str[4];

	str[0] = 'n';
	str[1] = 'a';
	str[2] = '2';
	str[3] = '\0';
	int result = ft_str_is_lowercase(str);  // Appelle ft_str_is_lowercase pour vérifier la chaîne 'str'.
	printf("%d", result);  // Affiche le résultat (1 si tous les caractères sont des lettres minuscules, sinon 0).
	return (0);
}
*/
