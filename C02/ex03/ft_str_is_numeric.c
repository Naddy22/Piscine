/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:41:03 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/25 12:33:26 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	counter;  // Compteur pour parcourir les caractères de 'str'.

	counter = 0;  // Initialise le compteur à zéro.
	while (str[counter] != '\0')  // Boucle pour parcourir chaque caractère de 'str'.
	{
		if (str[counter] > 47 && str[counter] < 58)  // Vérifie si le caractère est un chiffre (0-9).
		{
			counter++;  // Passe au caractère suivant si c'est un chiffre.
		}
		else
		{
			return (0);  // Si le caractère n'est pas un chiffre, renvoie 0.
		}
	}
	return (1);  // Si tous les caractères sont des chiffres, renvoie 1.
}

/* Exemple d'utilisation de la fonction ft_str_is_numeric :
int	main(void)
{
	char str[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

	int result = ft_str_is_numeric(str);  // Appelle ft_str_is_numeric pour vérifier la chaîne 'str'.
	printf("%d", result);  // Affiche le résultat (1 si tous les caractères sont des chiffres, sinon 0).
	return (0);
}
*/
