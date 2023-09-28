/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:20:03 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/28 17:49:50 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// Fonction qui recherche la première occurrence de la chaîne to_find dans la chaîne str.
char *ft_strstr(char *str, char *to_find)
{
    int s = 0; // Index pour parcourir str.
    int f = 0; // Index pour parcourir to_find.
    char *result = 0; // Pointeur vers le début de la sous-chaîne trouvée.

    if (to_find[0] == '\0')
        return (str); // Si to_find est vide, retourne str.

    while (str[s] != '\0')
    {
        while (str[s] == to_find[f])
        {
            if (to_find[f + 1] == '\0')
                result = &str[s - f]; // Si to_find est entièrement trouvé, met à jour le pointeur result.
            s++;
            f++;
        }
        s++; // Avance dans str.
    }

    return (result); // Retourne le pointeur result (peut être NULL si to_find n'a pas été trouvé).
}

/*
int main(void)
{
    char str[] = "Je fais des dessins bleu blanc rouge";
    char find[] = "chat";
    char *result = ft_strstr(str, find);

    printf("%s", result);
    return (0);
}
*/
