#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	void setName(std::string name);
	void announcement(void);
};

Zombie* zombieHorde(int n, std::string name);


#endif