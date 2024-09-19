/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamundi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 02:31:04 by csamundi          #+#    #+#             */
/*   Updated: 2024/09/08 02:31:06 by csamundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include "./ft_printf/ft_printf.h"

static int	max_length(t_stack_node **stack)
{
	t_stack_node	*ls;
	int				max;
	int				b_max;

	ls = *stack;
	max = ls->index;
	b_max = 0;
	while (ls)
	{
		if (ls->index > max)
			max = ls->index;
		ls = ls->next;
	}
	while ((max >> b_max) != 0)
		b_max++;
	return (b_max);
}

int	stack_len(t_stack_node *stack)
{
	int				i;
	t_stack_node	*tmp;

	tmp = stack;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	sort_radix(t_stack_node **a, t_stack_node **b)
{
	int				i;
	int				j;
	int				size;
	int				b_max;
	t_stack_node	*tmp;

	tmp = *a;
	size = stack_len(*a);
	b_max = max_length(a);
	i = -1;
	while (++i < b_max)
	{
		j = -1;
		while (++j < size)
		{
			tmp = *a;
			if (((tmp->index >> i) & 1) == 0)
				pb(a, b);
			else
				ra(a);
		}
		while (stack_len(*b) != 0)
			pa(a, b);
	}
}
