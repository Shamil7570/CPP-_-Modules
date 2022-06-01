NAME	= bureaucrat

GCC	= c++  

FLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp	Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
				PresidentialPardonForm.cpp
 
OBJS	= $(SRCS:.cpp=.o)

%.o: %.cpp Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp \
				PresidentialPardonForm.hpp
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