# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/07 16:23:34 by joguntij          #+#    #+#              #
#    Updated: 2019/12/08 20:35:26 by joguntij         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FUNCTIONS = functions/ft_charcmp.c functions/ft_check_dict.c functions/ft_check_input.c functions/ft_create_line.c functions/ft_open_file.c functions/ft_populate_struct.c functions/ft_print_three_numbers.c functions/ft_putchar.c functions/ft_putstr.c functions/ft_strcmp.c functions/ft_strlen.c functions/ft_strlen_newline.c functions/ft_valuelen.c functions/ft_verify_values.c
NAME = rush-02
MAIN = main.c

all: $(NAME)

$(NAME):
	@gcc -Wall -Werror -Wextra -o $(NAME) $(FUNCTIONS) $(MAIN)

fclean:
	@/bin/rm -f $(NAME)

re: fclean $(NAME)
