NAME =		scavtrap
CC =		c++
CFLAGS =	-Wall -Werror -Wextra

SRC =	main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
