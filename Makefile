# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybestrio <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/18 17:03:43 by ybestrio          #+#    #+#              #
#    Updated: 2021/12/18 17:08:17 by ybestrio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME1 = push_swap

SRCS1 = bigswap.c push_swap.c boxer.c exceptions.c exceptions2.c fivesolver.c foursolver.c ft_split.c matrix1.c matrix2.c minimoves.c parsestring.c savespace.c sizelimit.c sizelimit2.c split_utils.c utils.c

OBJS1 = $(SRCS1:.c=.o)

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

$(NAME1): $(OBJS1)
	$(CC) $(CFLAGS) $(OBJS1)  -o $(NAME1)

all:	$(NAME1)

clean:
		$(RM) $(OBJS1)

fclean:	clean
		$(RM) $(NAME1)

re:		fclean all

.PHONY: all clean fclean re
