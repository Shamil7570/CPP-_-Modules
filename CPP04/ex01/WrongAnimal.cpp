#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : wrongType("Unknown wrong animal") {
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    this->wrongType = other.wrongType;
    return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = other;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::wrongMakeSound() const {
    std::cout << "Wrong sound" << std::endl;
}

std::string WrongAnimal::getWrongType() const {
    return wrongType;
}

