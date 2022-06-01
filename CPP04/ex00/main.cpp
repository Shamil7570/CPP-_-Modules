#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;

    const WrongCat *cat = new WrongCat();
    cat->wrongMakeSound();

    const WrongAnimal *cat2 = new WrongCat();
    cat2->wrongMakeSound();
    delete cat;
    delete cat2;
    return 0;
}
