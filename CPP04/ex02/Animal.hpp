#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include "Brain.hpp"

class Animal {
public:
    Animal();
    Animal(const Animal& other);
    Animal& operator=(const Animal &other);
    virtual ~Animal();
    
    virtual std::string getType() const = 0;
    virtual void makeSound() const = 0;
protected:
    std::string type;
};

#endif
