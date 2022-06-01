#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << this->name + ": die" << std::endl;
}

void Zombie:: announce(void)
{
	std::cout << this->name  << ": BraiiiiiiinnnzzzZ" << std::endl;
}