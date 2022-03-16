FLAG=-Wall -Werror -Wextra -std=c++98

CC=clang++

NAME=Zombie

SRC=newZombie.cpp main.cpp randomChump.cpp Zombie.cpp \

all: $(NAME)
	
$(NAME): $(SRC)
	$(CC) $(FLAG) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)