/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:07:43 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/24 16:58:16 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strcat(char *dest, char *src)
{
	int	d;
	int	s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		s++;
		d++;
	}
	dest[d] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char src[7] = "Nadège";
	char dest[99] = "Je m'appelle ";

	ft_strcat(dest, src);
	printf("%s", dest);
	return (0);
}*/
