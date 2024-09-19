/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamundi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:39:06 by csamundi          #+#    #+#             */
/*   Updated: 2024/09/02 12:41:07 by csamundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include "./ft_printf/ft_printf.h"

static void	push(t_stack_node **a_stack, t_stack_node **b_stack)
{
	t_stack_node	*tmp;

	if (!b_stack)
		return ;
	tmp = (*b_stack)->next;
	append_node(a_stack, *b_stack);
	*b_stack = tmp;
	if (*b_stack)
		(*b_stack)->node_previous = NULL;
}

void	pa(t_stack_node **a, t_stack_node **b)
{
	push(a, b);
	ft_printf("pa\n");
}

void	pb(t_stack_node **a, t_stack_node **b)
{
	push(b, a);
	ft_printf("pb\n");
}
