NAME= Human

CC= clang++

FLAG= -Werror -Wextra -Wall -std=c++98

SRC = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp \

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAG) $(SRC) -o $(NAME)

fclean: 
	rm $(NAME)
