/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:09:13 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/24 16:59:47 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				d;
	unsigned int	s;

	s = 0;
	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0' && s < nb)
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
	char src[12] = "Nadegenette";
	char dest[99] = "Je m'appelle ";
	ft_strncat(dest, src, 6);
	printf("%s", dest);
	return (0);
}*/
