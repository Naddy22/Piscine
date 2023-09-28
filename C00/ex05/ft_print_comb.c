/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:39:07 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/25 12:02:28 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	a;
	int	b; //creation de 3 int : un pour le chiffre des centaines, des dizaines et des chiffres
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1; //b sera toujours +1 que a
		while (b <= '8')
		{
			c = b + 1; //c sera toujours +1 que b
			while (c <= '9')
			{
				write (1, &a, 1);
				write (1, &b, 1); //ecrire les 3 chiffres
				write (1, &c, 1);
				if (a != '7' || b != '8' || c != '9') //imprimer une virgule si on est pas arrivé aux derniers nombre possible qui est 789
					write (1, ", ", 2);
				c++; //on incremente le dernier chiffre jusqu'a ce qu'il arrive à 9
			}
			b++; //on sort de la boucle des chiffres pour aller dans les dizaines et donc on ajoute 1 à b
		}
		a++; //on sort de la boucle des dizaines pour aller dans les centaine et donc on ajoute 1 à a
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
