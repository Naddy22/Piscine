/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:29:59 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/25 12:11:00 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	counter; //créer un compteur pour avancer dans les caracteres de la chaine de caractère

	counter = 0;
	while (str[counter] != '\0') //faire la boucle tant que la chaine n'est pas arrivé au dernier caractère nul
	{
		write(1, &str[counter], 1); //ecris 1 à 1 les lettres de la chaine de caractere grace aux compteurs
		counter++; //incrementer pour passer au caractere suivant
	}
}
/*
int	main(void)
{
	char string[] = "Je suis un poisson Blob";
	ft_putstr(string);
    return (0);
}*/
