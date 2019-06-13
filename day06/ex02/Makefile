# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/13 15:16:22 by Roger Ndaba       #+#    #+#              #
#    Updated: 2019/06/13 16:38:34 by Roger Ndaba      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = randcast

CC = clang++ -Wall -Wextra -Werror -Wno-unused -std=c++98

FILE = A.cpp B.cpp Base.cpp C.cpp main.cpp

all: $(NAME)

$(NAME):
	@$(CC) $(FILE) -o $(NAME)
	@printf "\e[1;32mCompiled successfully\e[0m\n"

clean:
	@rm -fr $(NAME)
	@printf "\e[1;31m ./convert deleted\e[0m\n"
re: clean all