#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << this->name + ": die" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::announcement(void)
{
	std::cout << this->name + ": BraiiiiiiinnnzzzZ" << std::endl;
}