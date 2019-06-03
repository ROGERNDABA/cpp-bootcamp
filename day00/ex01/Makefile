# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roger <rogerndaba@gmail.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 14:23:23 by roger             #+#    #+#              #
#    Updated: 2019/06/03 14:23:24 by roger            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = clang++ -Wall -Wextra -Werror -o $(NAME)

FILE = Phonebook.cpp

all: $(NAME)

$(NAME):
	@$(CC) $(FILE)
	@printf "\e[1;32mCompiled successfully\e[0m\n"

fclean:
	@rm -fr $(NAME)

re: fclean all

