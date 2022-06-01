#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("") {
    std::cout << "FragTrap default constructor called" << std::endl;
    this->hit_points = 100;
    this->energy_points = 100;
    this->damage = 30;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj) {
    std::cout << "FragTrap " << this->name << " copy constructor called" << std::endl;
    *this = obj;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name){
    std::cout << "FragTrap " << this->name << " constructed" << std::endl;
    this->hit_points = 100;
    this->energy_points = 100;
    this->damage = 30;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &obj) {
    std::cout << "FragTrap " << name << " assignment operator called" << std::endl;
    ClapTrap::operator=(obj);
    return *this;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->name << " says: 'High fives!'" << std::endl;
}

void FragTrap::attack(const std::string& target){
    if (this->energy_points > 0){
        this->energy_points--;
        std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!"
                << std::endl;
    } else {
        std::cout << "FragTrap " << name << " cannot attack anymore!" << std::endl;
    }
}