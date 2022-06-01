NAME    = ex02

CC      = c++

CFLAGS  = -Wall -Wextra -Werror -std=c++98

SRCS    = main.cpp	\


OBJ	    = $(SRCS:.cpp=.o)

all     : $(NAME)

$(NAME) : $(OBJ)
	     $(CC) $(CFLAGS) $(SRCS) -o $(NAME)

%.o	    : %.c
			@$(CC) -c $< -o $@

clean	:
		 @$(RM) $(OBJ)

fclean	: clean
		 @$(RM) $(NAME)

re		: fclean all

.PHONY	: all clean fclean re