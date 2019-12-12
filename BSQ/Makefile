# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/10 16:29:46 by joguntij          #+#    #+#              #
#    Updated: 2019/12/10 19:05:34 by joguntij         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FUNCTIONS = functions/*.c
MAIN = srcs/main.c
NAME = bsq

all: $(NAME)

$(NAME):
	@gcc -Wall -Werror -Wextra -o $(NAME) $(FUNCTIONS) $(MAIN)

fclean:
	@/bin/rm -f $(NAME)

re: fclean $(NAME)		 