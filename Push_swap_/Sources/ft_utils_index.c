/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamundi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:21:55 by csamundi          #+#    #+#             */
/*   Updated: 2024/09/02 11:42:31 by csamundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include "./ft_printf/ft_printf.h"

static t_stack_node	*find_highest(t_stack_node **stack)
{
	int				min;
	t_stack_node	*ls;
	t_stack_node	*lst_min;

	if (!(*stack))
		return (NULL);
	min = 0;
	lst_min = NULL;
	ls = *stack;
	while (ls)
	{
		if ((ls->index == -1) && (!min || ls->value < lst_min->value))
		{
			lst_min = ls;
			min = 1;
		}
		ls = ls->next;
	}
	return (lst_min);
}

void	position_index(t_stack_node **stack)
{
	t_stack_node	*lst;
	int				index;

	index = 0;
	lst = find_highest(stack);
	while (lst)
	{
		lst->index = index++;
		lst = find_highest(stack);
	}
}
