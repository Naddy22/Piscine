/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:43:33 by namoisan          #+#    #+#             */
/*   Updated: 2023/09/25 11:55:08 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_putchar(char c)
{
	write(1, &c, 1); // ecris le caractère mis en paramètre, write prends une adresse d'où le &
}
