# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mingypar <mingypar@42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 10:43:33 by mingypar          #+#    #+#              #
#    Updated: 2022/02/22 16:50:00 by mingypar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
gcc -c ft_putchar.c ft_strlen.c ft_swap.c ft_putstr.c ft_strcmp.c
ar rc libft.a ft_putchar.o ft_strlen.o ft_swap.o ft_putstr.o ft_strcmp.o
