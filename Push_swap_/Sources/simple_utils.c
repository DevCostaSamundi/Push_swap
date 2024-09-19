/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamundi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:09:09 by csamundi          #+#    #+#             */
/*   Updated: 2024/09/02 11:17:20 by csamundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include "./ft_printf/ft_printf.h"

int	stack_sorted(t_stack_node **stack)
{
	t_stack_node	*temp;

	temp = *stack;
	while (temp->next)
	{
		if (temp->index > temp->next->index)
			return (-1);
		temp = temp->next;
	}
	return (1);
}

int	tiny_sort(t_stack_node **a, int size)
{
	int	len;

	len = 0;
	while ((*a)->index != 0)
	{
		rotate(a);
		len++;
	}
	if (stack_sorted(a) == 1)
	{
		if (len > (size / 2))
		{
			if (size == 5 && len == 3)
				ft_printf("rra\n");
			ft_printf("rra\n");
		}
		else
			while (len-- > 0)
				ft_printf("ra\n");
		return (1);
	}
	else
		while (len-- > 0)
			reverse_rotate(a);
	return (0);
}

void	res_index(t_stack_node **stack)
{
	t_stack_node	*temp;

	temp = *stack;
	while (temp)
	{
		temp->index = -1;
		temp = temp->next;
	}
	position_index(stack);
}

void	min_rotate(t_stack_node **stack, int size)
{
	int	i;

	i = 0;
	while ((*stack)->index != 0)
	{
		rotate(stack);
		i++;
	}
	if ((i > (size / 2)))
	{
		if (size == 5 && i == 3)
			ft_printf("rra\n");
		ft_printf("rra\n");
	}
	else
	{
		while (i > 0)
		{
			ft_printf("ra\n");
			i--;
		}
	}
}
