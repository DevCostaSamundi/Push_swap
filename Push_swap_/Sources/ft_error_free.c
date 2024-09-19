/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamundi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:14:43 by csamundi          #+#    #+#             */
/*   Updated: 2024/09/17 12:25:58 by csamundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	free_stack(t_stack_node **stack)
{
	if (!stack || !(*stack))
		return ;
	free_stack(&(*stack)->next);
	free(*stack);
	*stack = NULL;
}
