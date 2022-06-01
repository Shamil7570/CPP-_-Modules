NAME		= megaphone

SRC			= megaphone.cpp

OBJ			= $(SRC:.cpp=.o)

CC			= c++ -Wall -Wextra -Werror -std=c++98

RM			= rm -f

all			: $(NAME)

$(NAME)		: $(OBJ)
			@$(CC) -o $(NAME) $(OBJ)

%.o			: %.c
			@$(CC) -c $< -o $@

clean		:
			@$(RM) $(OBJ)
	
fclean		: clean
			@$(RM) $(NAME)

re			: fclean all

.PHONY		: all clean fclean re