/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:05:21 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/25 12:12:00 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;//créer un compteur pour avancer dans les caracteres de la chaine de caractère

	counter = 0;
	while (str[counter] != '\0')//faire la boucle tant que la chaine n'est pas arrivé au dernier caractère nul
	{
		counter++; //avancer dans le compteur ce qui fera en même monter le chiffre du compteur
	}
	return (counter); //retourner le compteur finale ce qui donnera le nombre de caractere
}
/*
int	main(void)
{
	char string[] = "Je suis un poisson Blob";
	ft_strlen(string);
	printf ("%d", ft_strlen(string));
	return (0);
}*/
