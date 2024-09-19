/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csamundi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 23:52:03 by csamundi          #+#    #+#             */
/*   Updated: 2024/08/31 23:54:57 by csamundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>
# include <unistd.h>

typedef struct s_stack_node
{
	int					value;
	int					index;

	struct s_stack_node	*next;
	struct s_stack_node	*node_previous;
}	t_stack_node;

t_stack_node	*new_ls(int cont);
t_stack_node	*find_last(t_stack_node *stack);

char			**ft_split(char const *s, char c);

int				ft_isdigit(int n);
int				ft_atoi(const char *str);
int				ft_putstr_fd(char *s, int fd);
int				stack_len(t_stack_node *stack);
int				is_valid_number(const char *str);
int				stack_sorted(t_stack_node **stack);
int				tiny_sort(t_stack_node **a, int size);

void			free_split(char **split);
void			free_stack(t_stack_node **stack);
void			position_index(t_stack_node **stack);
void			simple_sort(t_stack_node **a, t_stack_node **b);
void			lst_addback(t_stack_node **a, t_stack_node *news);
void			append_node(t_stack_node **stack, t_stack_node *node);

void			res_index(t_stack_node **stack);
void			min_rotate(t_stack_node **stack, int size);

void			pa(t_stack_node **a, t_stack_node **b);
void			pb(t_stack_node **a, t_stack_node **b);

void			sb(t_stack_node **b);
void			sa(t_stack_node **a);
void			ss(t_stack_node **a, t_stack_node **b);

void			rb(t_stack_node **b);
void			ra(t_stack_node **a);
void			rotate(t_stack_node **stack);
void			rr(t_stack_node **a, t_stack_node **b);

void			rrb(t_stack_node **b);
void			rra(t_stack_node **a);
void			reverse_rotate(t_stack_node **stack);
void			rrr(t_stack_node **a, t_stack_node **b);

void			sort_radix(t_stack_node **a, t_stack_node **b);

#endif
