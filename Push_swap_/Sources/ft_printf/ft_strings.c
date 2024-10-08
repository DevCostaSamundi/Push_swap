/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamundi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:55:20 by csamundi          #+#    #+#             */
/*   Updated: 2024/07/24 15:59:11 by csamundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putcharacter_length(char character, int *length)
{
	write(1, &character, 1);
	(*length)++;
}

void	ft_string(char *args, int *length)
{
	size_t	i;

	i = 0;
	if (!args)
	{
		write(1, "(null)", 6);
		(*length) += 6;
		return ;
	}
	while (args[i] != '\0')
	{
		ft_putcharacter_length(args[i], length);
		i++;
	}
}
