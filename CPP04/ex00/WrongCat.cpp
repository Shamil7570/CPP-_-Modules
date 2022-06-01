#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    this->wrongType = "Wrong cat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    this->wrongType = other.wrongType;
    return *this;
}

WrongCat::WrongCat(const WrongCat &other)  : WrongAnimal(other) {
    std::cout << " WrongCat copy constructor called" << std::endl;
    *this = other;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}


