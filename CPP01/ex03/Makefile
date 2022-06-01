NAME    = ex03

CC      = c++

CFLAGS  = -Wall -Wextra -Werror -std=c++98

SRCS    = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp


OBJ	    = $(SRCS:.cpp=.o)

all     : $(NAME)

$(NAME) : $(OBJ) HumanA.hpp HumanB.hpp Weapon.hpp
	     $(CC) $(CFLAGS) $(SRCS) -o $(NAME)

%.o	    : %.c
			@$(CC) -c $< -o $@

clean	:
		 @$(RM) $(OBJ)

fclean	: clean
		 @$(RM) $(NAME)

re		: fclean all

.PHONY	: all clean fclean re