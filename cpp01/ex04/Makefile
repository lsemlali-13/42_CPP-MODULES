SRC = main.cpp
CPPFLAGS = -std=c++17 -Wall -Wextra -Werror

NAME = rep

OBJ = $(SRC:.cpp=.o)
$(NAME) : $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

all : $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
