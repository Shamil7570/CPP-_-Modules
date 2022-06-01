#include "Zombie.hpp"

int main(void)
{
	int n = 7;
	Zombie* horde = zombieHorde(n, "zombie");
	for (int i = 0; i < n; i++)
		horde->announcement();
	delete[] horde;
	return 0;
}