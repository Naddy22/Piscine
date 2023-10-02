/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:20:03 by namoisan          #+#    #+#             */
/*   Updated: 2023/10/02 10:51:51 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		s; // Indice pour parcourir la chaîne 'str'.
	int		f; // Indice pour parcourir la chaîne 'to_find'.

	s = 0;
	f = 0;

	if (to_find[f] == '\0')
		return (str); // Si 'to_find' est une chaîne vide, retourne 'str'.

	while (str[s] != '\0')
	{
		while (str[s] == to_find[f] && str[s] != '\0')
		{
			if (to_find[f + 1] == '\0')
				return (&str[s - f]); // Correspondance trouvée, retourne un pointeur vers le début de la sous-chaîne correspondante dans 'str'.
			s++;
			f++;
		}

		s = s - f; // Réinitialise 's' pour continuer la recherche.
		f = 0; // Réinitialise 'f'.

		if (str[s] == '\0')
			return (0); // Aucune correspondance trouvée, retourne 0.

		s++;
	}

	return (0); // Aucune correspondance trouvée, retourne 0.
}
/*
int	main(void)
{
	char str[] = "testning";
	char find[] = "n";
	char *result = ft_strstr(str, find);

	printf("%s", result);
	return (0);
}*/
