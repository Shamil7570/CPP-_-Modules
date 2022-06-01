NAME = animal

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJ = $(SRC:.cpp=.o)

HDR = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(LDFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp $(HDR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(MAKE) all

.PHONY: all re fclean clean