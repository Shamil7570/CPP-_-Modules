#include <iostream>
#include "Dog.hpp"

Dog::Dog()
{
	std::cout <<"[Dog]"<< "Default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &other):Animal(other)
{
	std::cout << "[Cat]Copy constructor called" << std::endl;
	this->brain = new Brain(*(other.brain));
	*this = other;
}

Dog	&Dog::operator =(const Dog &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = other.type;
	*this->brain = *other.brain;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "[Dog]" << ": Destructor called" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const
{
	std::cout << "Bark!" << std::endl;
}

std::string	Dog::getType() const
{
	return (type);
}

