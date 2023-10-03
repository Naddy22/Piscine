/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:59:24 by namoisan          #+#    #+#             */
/*   Updated: 2023/10/03 16:52:42 by namoisan         ###   ########.fr       */
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
	if (argc < 0)
		return (0); // Si argc (le nombre d'arguments) est inférieur à 0, le programme se termine
	ft_putstr(argv[0]); // Appelle la fonction ft_putstr pour afficher le premier argument (argv[0])
	return (0);
}
