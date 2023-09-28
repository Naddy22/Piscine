/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:11:47 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/24 12:22:21 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0' && c < n && s1[c] == s2[c])
		c++;
	if (s1[c] == s2[c] || c == n)
		return (0);
	else if (s1[c] < s2[c])
		return (-1);
	else
		return (1);
}
/*
int	main(void)
{
	char s1[] = "abrocadabra";
	char s2[] = "abracodo";

	ft_strncmp(s1, s2, 5);
	printf("%d", ft_strncmp(s1, s2, 5));
	return (0);
}*/
