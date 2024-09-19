/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamundi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:13:11 by csamundi          #+#    #+#             */
/*   Updated: 2024/07/24 16:16:05 by csamundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <signal.h>

//Prototipos das funcoes;

void	ft_putnbr(int number, int *length);
void	ft_pointer(size_t pointer, int *length);
void	ft_unsigned_int(unsigned int count, int *length);
void	hexadecimal(unsigned int x, int *length, char x_or_x);
void	ft_putcharacter_length(char character, int *length);
void	ft_string(char *args, int *length);

int		ft_printf(const char *string, ...);

#endif
