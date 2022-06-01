#include "HumanB.hpp"

HumanB::~HumanB(){}

HumanB::HumanB(std::string name) : name(name)
{
	this->weapon = NULL;
}

void HumanB::attack(void)
{
	if (this->weapon)
		std::cout << name + " attacks with their " + weapon->getType() << std::endl;
	else
		std::cout << name + " cannot attack " << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}