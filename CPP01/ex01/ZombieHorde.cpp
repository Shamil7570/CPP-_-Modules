#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
	if (n <= 0)
	{
		std::cout << "Incorrect number of zombies entered" << std::endl;
		return NULL;
	}
	Zombie *zombie = new Zombie[n];
	for (int i = 0; i < n; i++)
		zombie[i].setName(name);
	return zombie;
}