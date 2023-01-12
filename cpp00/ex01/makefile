SRC = main.cpp Phonebook.cpp Contact.cpp
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = PHONEB

OBJ = $(SRC:.cpp=.o)
$(NAME) : $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

all : $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all