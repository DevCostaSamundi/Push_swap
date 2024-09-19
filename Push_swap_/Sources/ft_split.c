/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamundi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 03:17:01 by csamundi          #+#    #+#             */
/*   Updated: 2024/09/04 03:17:08 by csamundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include "./ft_printf/ft_printf.h"
#include <stddef.h>

static int	ft_nbrword(char const *src, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (src[i])
	{
		if (src[i] == c)
			i++;
		else
		{
			word++;
			while (src[i] != c && src[i])
				i++;
		}
	}
	return (word);
}

static void	*ft_insert(char *dest, char const *src, int index, int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		dest[i] = src[index - n];
		i++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}

static void	ft_create_split(char **split, char const *src, char c, int line)
{
	int	i;
	int	i_line;
	int	len;

	i = 0;
	i_line = 0;
	while (i_line < line)
	{
		len = 0;
		while (src[i] == c && src[i])
			i++;
		while (src[i] != c && src[i])
		{
			len++;
			i++;
		}
		split[i_line] = (char *)malloc((len + 1) * sizeof(char));
		if (!split[i_line])
			return ;
		ft_insert(split[i_line], src, i, len);
		i_line++;
	}
	split[i_line] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		line;

	if (!s)
		return (NULL);
	line = ft_nbrword(s, c);
	split = (char **)malloc((line + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	ft_create_split(split, s, c, line);
	return (split);
}
