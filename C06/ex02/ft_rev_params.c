/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 13:45:40 by namoisan          #+#    #+#             */
/*   Updated: 2023/10/03 16:54:29 by namoisan         ###   ########.fr       */
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

	c = argc - 1; // Initialise c à la valeur de argc - 1 (le dernier indice du tableau argv)
	while (c > 0) // Tant que c est supérieur à 0
	{
		ft_putstr(argv[c]); // Appelle la fonction ft_putstr pour afficher l'argument actuel (argv[c])
		write(1, "\n", 1); // Écrit un saut de ligne pour séparer les arguments affichés
		c--; // Décrémente c pour passer à l'argument précédent
	}
	return (0); // Termine le programme
}
