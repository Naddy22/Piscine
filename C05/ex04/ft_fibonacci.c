/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:26:38 by namoisan          #+#    #+#             */
/*   Updated: 2023/10/03 15:19:26 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1); // Les valeurs négatives n'ont pas de valeur Fibonacci définie, retourne -1
	else if (index == 0)
		return (0); // Le terme Fibonacci à l'index 0 est 0
	else if (index == 1 || index == 2)
		return (1); // Les termes Fibonacci à l'index 1 et 2 sont tous les deux 1
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2)); // Récursion : ajoute les deux termes précédents
}

/*
int	main(void)
{
	printf("%d", ft_fibonacci(5));
	return (0);
}
*/
