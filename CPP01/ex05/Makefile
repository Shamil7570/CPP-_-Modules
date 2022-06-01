NAME    = Harl

CC      = c++

CFLAGS  = -Wall -Wextra -Werror -std=c++98

SRCS    = main.cpp Harl.cpp


OBJ	    = $(SRCS:.cpp=.o)

all     : $(NAME)

$(NAME) : $(OBJ) Harl.hpp 
	     $(CC) $(CFLAGS) $(SRCS) -o $(NAME)

%.o	    : %.c
			@$(CC) -c $< -o $@

clean	:
		 @$(RM) $(OBJ)

fclean	: clean
		 @$(RM) $(NAME)

re		: fclean all

.PHONY	: all clean fclean re