#include "Base.hpp"
#include <stdio.h>
#include <iostream>

Base * generate(void){
    int x;

    srand(time(NULL));
    x = rand() % 3;
    switch (x)
    {
    case 0:
        std::cout << "Create class A" << std::endl;
        return new (A);
    case 1:
        std::cout << "Create class B" << std::endl;
        return new (B);
    case 2:
        std::cout << "Create class C" << std::endl;
        return new (C);
    default:
        std::cout << "Invalid value" << std::endl;
        break;
    }
    return NULL;
}

void identify(Base* p){
    if (p == dynamic_cast<A *>(p))
        std::cout << "Type is A" << std::endl;
    else if (p == dynamic_cast<B *>(p))
        std::cout << "Type is B" << std::endl;
    else   
        std::cout << "Type is C" << std::endl;
}

void  identify(Base& p)
{
	try
	{
		A& A_ref = dynamic_cast<A&>(p);
		(void) A_ref;
		std::cout << "The type of the object pointed to by: A class" << std::endl;
	}
	catch (const std::exception& ex) {}
	try
	{
		B& B_ref = dynamic_cast<B&>(p);
		(void) B_ref;
		std::cout << "The type of the object pointed to by: B class" << std::endl;
	}
	catch (const std::exception& ex) {}
	try
	{
		C& C_ref = dynamic_cast<C&>(p);
		(void) C_ref;
		std::cout << "The type of the object pointed to by: C class" << std::endl;
	}
	catch (const std::exception& ex) {}
}

int	main()
{
	Base* pointer;

	pointer = generate();
	identify(pointer);
	identify(*pointer);

	delete pointer;
	return 0;
}