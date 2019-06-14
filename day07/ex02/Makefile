# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/14 09:09:12 by Roger Ndaba       #+#    #+#              #
#    Updated: 2019/06/14 12:53:02 by Roger Ndaba      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = array

CC = clang++ -Wall -Wextra -Werror -Wno-unused -std=c++98

FILE =  main.cpp

all: $(NAME)

$(NAME):
	@$(CC) $(FILE) -o $(NAME)
	@printf "\e[1;32mCompiled successfully\e[0m\n"

clean:
	@rm -fr $(NAME)
	@printf "\e[1;31m ./convert deleted\e[0m\n"
re: clean all