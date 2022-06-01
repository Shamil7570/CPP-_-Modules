#include <iostream>
#include "Animal.hpp"

Animal::Animal() : type("Unknown animal") {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()  {
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &other) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal &other) {
    this->type = other.type;
    return *this;
}

