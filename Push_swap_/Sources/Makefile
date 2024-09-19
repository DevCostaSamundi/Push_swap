# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csamundi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/30 16:59:48 by csamundi          #+#    #+#              #
#    Updated: 2024/08/30 17:15:12 by csamundi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

SRC	= ft_atoi.c \
	  ft_putstr_fd.c \
	  ft_split.c \
	  ft_radix.c \
	  ft_utils.c \
	  ft_utils_index.c \
	  functions_push.c \
	  push_swap.c \
	  reverse.c \
	  rotate.c \
	  simple_sort.c \
	  simple_utils.c \
	  swap.c \
	  is_valid_number.c \
	  ft_error_free.c

GCC	= cc
CFLAGS	= -Wall -Wextra -Werror
OBJS	= $(SRC:.c=.o)

PRINTF	= ft_printf

all:	$(NAME)

$(NAME): $(OBJS)
	@make -s -C $(PRINTF)
	$(GCC) $(CFLAGS) -o $(NAME) $(OBJS) -I$(PRINTF)/hearders -L$(PRINTF) -lftprintf

%.o: %.c
	$(GCC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@make clean -s -C $(PRINTF)

fclean: clean
	@rm -f $(NAME)
	@make fclean -s -C $(PRINTF)
	

re: fclean all
