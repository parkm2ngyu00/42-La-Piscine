# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mingypar <mingypar@42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 12:00:41 by mingypar          #+#    #+#              #
#    Updated: 2022/02/22 18:45:31 by mingypar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c ft_putstr.c ft_putnbr.c ft_putchar.c ft_calc.c main.c
OBJS 	= ${SRCS:.c=.o}
NAME 	= do-op
CC		= gcc
CFLAGS  = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:		${OBJS}
			${CC} ${CLAGS} $^ -o $@

all : 		${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
