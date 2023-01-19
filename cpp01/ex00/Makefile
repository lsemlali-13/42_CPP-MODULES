SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = zombie

OBJ = $(SRC:.cpp=.o)
$(NAME) : $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

all : $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all