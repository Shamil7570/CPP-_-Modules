NAME = claptrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJ = $(SRC:.cpp=.o)

HDR = ClapTrap.hpp ScavTrap.hpp

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