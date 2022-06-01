#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{

	Dog basic;
	{
	Dog tmp = basic;
	}
// // Checklist test
// //	Cat cat;
// //	{
// //		Cat fake_cat = cat;
// //		std::cout << "ad :"<< fake_cat.brain << std::endl;
// //		std::cout << "ad :"<< cat.brain << std::endl;
// //	}
// //	std::cout << "ad :"<< cat.brain << std::endl;
// //	std::cout << "ad :"<< fake_cat.brain << std::endl;
// //	cat.makeSound();
// //	fake_cat.makeSound();


// //  subject main example

// 	Animal *herd[10];

// 	for (int i = 0; i < 5; i++)
// 		herd[i] = new Dog();
// 	for (int i = 5; i < 10 ; i++)
// 		herd[i] =  new Cat();
// 	for (int i = 0; i < 10; i++)
// 		herd[i]->makeSound();
// 	for (int i = 0; i < 10; i++)
// 		delete herd[i];


// //	Dog a;
// //	Dog b(a);
// //	Cat c;
// //	Cat d(c);
// //
// //	a = b;
// //	c = d;
// 	return 0;
}
