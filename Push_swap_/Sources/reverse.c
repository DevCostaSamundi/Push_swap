/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revers_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamundi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:04:01 by csamundi          #+#    #+#             */
/*   Updated: 2024/09/02 12:05:17 by csamundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include "./ft_printf/ft_printf.h"

void	reverse_rotate(t_stack_node **stack)
{
	t_stack_node	*node;

	if (!(*stack) || !(*stack)->next)
		return ;
	node = find_last(*stack);
	node->node_previous->next = NULL;
	node->node_previous = NULL;
	node->next = *stack;
	(*stack)->node_previous = node;
	*stack = (*stack)->node_previous;
}

void	rra(t_stack_node **a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_stack_node **b)
{
	reverse_rotate(b);
	ft_printf("rra\n");
}

void	rrr(t_stack_node **a, t_stack_node **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}
