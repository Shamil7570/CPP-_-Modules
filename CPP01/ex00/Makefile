NAME    = BraiiiiiiinnnzzzZ

CC      = c++

CFLAGS  = -Wall -Wextra -Werror -std=c++98

SRCS    = main.cpp	\
	      Zombie.cpp \
	      newZombie.cpp \
		  randomChump.cpp \

OBJ	    = $(SRCS:.cpp=.o)

all     : $(NAME)

$(NAME) : $(OBJ) Zombie.hpp
	     $(CC) $(CFLAGS) $(SRCS) -o $(NAME)

%.o	    : %.c
			@$(CC) -c $< -o $@

clean	:
		 @$(RM) $(OBJ)

fclean	: clean
		 @$(RM) $(NAME)

re		: fclean all

.PHONY	: all clean fclean re