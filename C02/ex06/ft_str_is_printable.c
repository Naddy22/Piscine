/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:14:23 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/25 12:42:28 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	counter;  // Compteur pour parcourir les caractères de 'str'.

	counter = 0;  // Initialise le compteur à zéro.
	while (str[counter] != '\0')  // Boucle pour parcourir chaque caractère de 'str'.
	{
		if (str[counter] > 31 && str[counter] < 127)  // Vérifie si le caractère est un caractère imprimable (codes ASCII 32 à 126 inclus).
		{
			counter++;  // Passe au caractère suivant si c'est un caractère imprimable.
		}
		else
		{
			return (0);  // Si le caractère n'est pas imprimable, renvoie 0.
		}
	}
	return (1);  // Si tous les caractères sont imprimables, renvoie 1.
}

/* Exemple d'utilisation de la fonction ft_str_is_printable :
int	main(void)
{
	char str[4];

	str[0] = '\n';
	str[1] = '=';
	str[2] = '~';
	str[3] = '\0';
	ft_str_is_uppercase(str);
	printf("%d", ft_str_is_uppercase(str));
	return (0);
}
*/
