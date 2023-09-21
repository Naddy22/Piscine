/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:31:22 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/19 11:39:38 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*int main(void)
{
	int c;
	int d;

	c = 4243;
	d = 100;
	ft_ultimate_div_mod(&c, &d);
	printf("div= %d et mod = %d\n", c, d);
	return (0);
}*/
