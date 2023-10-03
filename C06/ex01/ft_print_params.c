/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:16:43 by namoisan          #+#    #+#             */
/*   Updated: 2023/10/03 16:53:20 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		write(1, &str[counter], 1); // Écrit chaque caractère du tableau sur la sortie standard (écran)
		counter++;
	}
}

int	main(int argc, char **argv)
{
	int	c;

	c = 1; // Initialise un compteur à 1 pour parcourir les arguments à partir du deuxième (argv[1])
	if (argc < 1)
		return (0); // Si argc (le nombre d'arguments) est inférieur à 1, le programme se termine
	while (c < argc)
	{
		ft_putstr(argv[c]); // Appelle la fonction ft_putstr pour afficher l'argument actuel (argv[c])
		write(1, "\n", 1); // Écrit un saut de ligne pour séparer les arguments affichés
		c++; // Passe à l'argument suivant
	}
	return (0); // Termine le programme
}
