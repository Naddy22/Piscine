/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:47:17 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/25 12:30:37 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
/* La fonction ft_str_is_alpha vérifie si tous les caractères de la chaîne 'str' sont des lettres alphabétiques (a-zA-Z).
   Elle renvoie 1 si c'est le cas, sinon elle renvoie 0. */
int	ft_str_is_alpha(char *str)
{
	int	counter;  // Compteur pour parcourir les caractères de 'str'.

	counter = 0;  // Initialise le compteur à zéro.
	while (str[counter] != '\0')  // Boucle pour parcourir chaque caractère de 'str'.
	{
		if ((str[counter] > 64 && str[counter] < 91)  // Vérifie si le caractère est une lettre majuscule.
			|| (str[counter] > 96 && str[counter] < 123))  // Vérifie si le caractère est une lettre minuscule.
		{
			counter++;  // Passe au caractère suivant si c'est une lettre alphabétique.
		}
		else
		{
			return (0);  // Si le caractère n'est pas une lettre alphabétique, renvoie 0.
		}
	}
	return (1);  // Si tous les caractères sont des lettres alphabétiques, renvoie 1.
}

/* Exemple d'utilisation de la fonction ft_str_is_alpha :
int	main(void)
{
	char str[5];

	str[0] = 'B';
	str[1] = 'l';
	str[2] = 'o';
	str[3] = 'b';
	str[4] = '\0';
	int result = ft_str_is_alpha(str);  // Appelle ft_str_is_alpha pour vérifier la chaîne 'str'.
	printf("%d", result);  // Affiche le résultat (1 si tous les caractères sont des lettres alphabétiques, sinon 0).
	return (0);
}
*/
