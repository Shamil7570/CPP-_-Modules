NAME	= serialization

GCC	= c++  

FLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp	Serialization.cpp

OBJS	= $(SRCS:.cpp=.o)

%.o: %.cpp Serialization.hpp
	$(GCC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(GCC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re