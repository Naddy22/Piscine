/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:50:25 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/25 12:45:07 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	counter;  // Compteur pour parcourir les caractères de 'str'.

	counter = 0;  // Initialise le compteur à zéro.
	while (str[counter] != '\0')  // Boucle pour parcourir chaque caractère de 'str'.
	{
		if (str[counter] > 96 && str[counter] < 123)  // Vérifie si le caractère est une lettre minuscule (a-z).
		{
			str[counter] -= 32;  // Convertit la lettre minuscule en majuscule en modifiant la valeur ASCII.
		}
		counter++;  // Passe au caractère suivant.
	}
	return (str);
}

/* Exemple d'utilisation de la fonction ft_strupcase :
int	main(void)
{
	char str[] = "Je suis un 4 poisson blob";
	ft_strupcase(str);  // Convertit les lettres minuscules en majuscules dans la chaîne 'str'.
	printf("%s", str);  // Affiche la chaîne 'str' modifiée.
	return (0);
}
*/
