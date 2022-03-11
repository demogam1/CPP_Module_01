FLAG=-Wall -Werror -Wextra -std=c++98

CC=clang++

NAME=Zombie

SRC=main.cpp Zombie.cpp zombieHorde.cpp\

all: $(NAME)
	
$(NAME): $(SRC)
	$(CC) $(FLAG) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)