/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamundi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 08:43:43 by csamundi          #+#    #+#             */
/*   Updated: 2024/09/11 08:43:48 by csamundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include "./ft_printf/ft_printf.h"

static void	three_sort(t_stack_node **stack)
{
	while (stack_sorted(stack) != 1)
	{
		if (((*stack)->index > (*stack)->next->index)
			&& ((*stack)->index < (*stack)->next->next->index))
			sa(stack);
		else if (((*stack)->index > ((*stack)->next->index))
			&& ((*stack)->index > (*stack)->next->next->index))
			ra(stack);
		else
			rra(stack);
	}
}

static void	sort_for(t_stack_node **a, t_stack_node **b)
{
	if (tiny_sort(a, 4) == 1)
		return ;
	min_rotate(a, 4);
	pb(a, b);
	res_index(a);
	three_sort(a);
	pa(a, b);
}

void	simple_sort(t_stack_node **a, t_stack_node **b)
{
	int	size;

	size = stack_len(*a);
	if (size == 3)
		three_sort(a);
	else if (size == 4)
		sort_for(a, b);
	else
	{
		if (tiny_sort(a, 5) == 1)
			return ;
		min_rotate(a, 5);
		pb(a, b);
		res_index(a);
		sort_for(a, b);
		pa(a, b);
	}
}
