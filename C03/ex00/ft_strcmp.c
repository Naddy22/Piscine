/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:38:26 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/23 17:52:34 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] != '\0' && s2[counter] != '\0'
		&& s1[counter] == s2[counter])
		counter++;
	if (s1[counter] > s2[counter])
		return (1);
	else if (s1[counter] == '\0' && s2[counter] == '\0')
		return (0);
	else
		return (-1);
}
/*
int main(void)
{
	char s1[] = "carotte";
	char s2[] = "crocodile";

	ft_strcmp(s1, s2);
	printf("%d", ft_strcmp(s1, s2));
	return (0);
}*/
