/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamundi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:18:10 by csamundi          #+#    #+#             */
/*   Updated: 2024/09/02 11:21:08 by csamundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include "./ft_printf/ft_printf.h"

static void	swap(t_stack_node **stack)
{
	int	index;
	int	value;

	if (!(*stack)->next)
		return ;
	value = (*stack)->next->value;
	index = (*stack)->next->index;
	(*stack)->next->value = (*stack)->value;
	(*stack)->next->index = (*stack)->index;
	(*stack)->value = value;
	(*stack)->index = index;
}

void	sa(t_stack_node **a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_stack_node **b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(t_stack_node **a, t_stack_node **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}
