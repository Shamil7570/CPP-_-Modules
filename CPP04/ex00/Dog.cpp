#include <iostream>
#include "Dog.hpp"

Dog::Dog() : Animal() {
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &other) {
    this->type = other.type;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof woof woof" << std::endl;
}


