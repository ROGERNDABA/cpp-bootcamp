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

