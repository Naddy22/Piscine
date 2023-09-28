/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:20:03 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/25 11:15:04 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int		s;
	int		f;
	char	*result;

	s = 0;
	f = 0;
	result = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[s] != '\0')
	{
		while (str[s] == to_find[f])
		{
			if (to_find[f + 1] == '\0')
				result = &str[s - f];
			s++;
			f++;
		}
		s++;
	}
	return (result);
}
/*
int	main(void)
{
	char str[] = "Je fais des dessins bleu blanc rouge";
	char find[] = "chat";
	char *result = ft_strstr(str, find);

	printf("%s", result);
	return (0);
}*/
