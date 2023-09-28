/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:27:43 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/25 12:07:31 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b; //stocker dans le int pointé le resultat du calcul
	*mod = a % b;
}
/*int main(void)
{
	int d;
	int m;

	ft_div_mod(4243, 100, &d, &m);
	printf("div = %d et mod = %d\n", d, m);
	return (0);
}*/
