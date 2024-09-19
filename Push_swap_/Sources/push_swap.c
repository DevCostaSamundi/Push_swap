/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamundi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 02:30:37 by csamundi          #+#    #+#             */
/*   Updated: 2024/09/17 12:09:12 by csamundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"
#include "./ft_printf/ft_printf.h"

static int	fduplicate(t_stack_node *stack)
{
	int				temp;
	t_stack_node	*duplicat;

	while (stack && stack->next)
	{
		temp = stack->value;
		duplicat = stack;
		while (duplicat->next)
		{
			duplicat = duplicat->next;
			if (duplicat->value == temp)
				return (-1);
		}
		stack = stack->next;
	}
	return (1);
}

static int	validate_value(char **split, t_stack_node **a)
{ 
	int	j;
	int	value;

	j = 0;
	while (split[j])
	{
		if (!is_valid_number(split[j]))
		{
			free_split(split);
			return (0);
		}
		value = ft_atoi(split[j]);
		if (value == INT_MAX || value == INT_MIN)
		{
			free_split(split);
			return (0);
		}
		lst_addback(a, new_ls(value));
		j++;
	}
	free_split(split);
	return (1);
}

static int	argument(char *arg, t_stack_node **a)
{
	char	**split;

	if (arg[0] == '\0')
		return (0);

	split = ft_split(arg, ' ');
	if (!split)
		return (0);
	if (!split[0])
	{
		free_split(split);
		return (0);
	}
	return (validate_value(split, a));
}

static int	error_free(int argc, char **argv, t_stack_node **a)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!argument(argv[i], a))
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	if (argc == 1)
		return (0);
	a = NULL;
	b = NULL;
	if (error_free(argc, argv, &a) == 0)
		return (ft_putstr_fd("Error\n", STDERR_FILENO));
	else if (fduplicate(a) == -1)
		return (ft_putstr_fd("Error\n", STDERR_FILENO));
	else
	{
		position_index(&a);
		if (stack_sorted(&a) != 1)
		{
			if (stack_len(a) <= 5)
				simple_sort(&a, &b);
			else
				sort_radix(&a, &b);
		}
	}
	free_stack(&a);
	free_stack(&b);
	return (0);
}
