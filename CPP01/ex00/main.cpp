#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie = newZombie("Foo");
	zombie->announce();
	randomChump("Lesha");
	delete zombie;
	return 0;
}
