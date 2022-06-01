#include "Brain.hpp"

Brain::Brain()
{
	std::cout <<"[Brain]"<< "Default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "My idea.";
}

Brain::Brain(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "My idea.";
	*this = other;
}

Brain & Brain::operator =(const Brain &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for (size_t i = 0; i < other.ideas->length(); i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "[Brain]" << ": Destructor called" << std::endl;
}

