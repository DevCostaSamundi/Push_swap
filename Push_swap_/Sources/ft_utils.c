/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamundi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:43:16 by csamundi          #+#    #+#             */
/*   Updated: 2024/09/02 11:53:45 by csamundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include "./ft_printf/ft_printf.h"

void	append_node(t_stack_node **stack, t_stack_node *node)
{
	if (!stack || !node)
		return ;
	if (!(*stack))
	{
		*stack = node;
		(*stack)->node_previous = NULL;
		(*stack)->next = NULL;
		return ;
	}
	(*stack)->node_previous = node;
	node->next = *stack;
	*stack = node;
	node->node_previous = NULL;
}

void	lst_addback(t_stack_node **stack, t_stack_node *news)
{
	t_stack_node	*tmp;

	if (!stack || !news)
		return ;
	if (!(*stack))
	{
		*stack = news;
		(*stack)->node_previous = NULL;
		(*stack)->next = NULL;
		return ;
	}
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = news;
	news->node_previous = tmp;
}

t_stack_node	*new_ls(int value)
{
	t_stack_node	*stack;

	stack = malloc(sizeof(t_stack_node));
	if (!stack)
		return (NULL);
	stack->value = value;
	stack->index = -1;
	stack->next = NULL;
	stack->node_previous = NULL;
	return (stack);
}

t_stack_node	*find_last(t_stack_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

void	free_split(char **split)
{
	char	**temp;

	temp = split;
	while (*temp)
	{
		free(*temp);
		temp++;
	}
	free(split);
}
