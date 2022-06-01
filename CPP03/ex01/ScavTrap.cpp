#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(""){
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->hit_points = 100;
    this->energy_points = 50;
    this->damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    std::cout << "ScavTrap " << this->name << " constructed" << std::endl;
    this->hit_points = 100;
    this->energy_points = 50;
    this->damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj) {
    std::cout << "ScavTrap " << name << " copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << this->name << " destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj){
    std::cout << "ScavTrap " << this->name << " assignment operator called" << std::endl;
    ClapTrap::operator=(obj);
    return *this;
}

void ScavTrap::attack(const std::string &target) {
    if (energy_points > 0) {
        energy_points--;
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!"
                  << std::endl;
    } else {
        std::cout << "ScavTrap " << this->name << " cannot attack anymore!" << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->name << " enters guarding mode" << std::endl;
}