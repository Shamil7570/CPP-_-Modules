#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *herd[10];

	for (int i = 0; i < 5; i++)
		herd[i] = new Dog();
	for (int i = 5; i < 10 ; i++)
		herd[i] =  new Cat();
	for (int i = 0; i < 10; i++)
		herd[i]->makeSound();
	for (int i = 0; i < 10; i++)
		delete herd[i];
	return 0;
}
