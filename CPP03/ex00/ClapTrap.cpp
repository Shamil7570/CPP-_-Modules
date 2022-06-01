#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(""), hit_points(10), energy_points(10), damage(0){
    std::cout << "default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), damage(0){
    std::cout << "name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj){
    std::cout << "ClapTrap " << this->name << " copy constructor called" << std::endl;
    *this = obj;
}

ClapTrap::~ClapTrap(){
    std::cout << "destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj){
    std::cout << "ClapTrap " << name << " assignment operator called" << std::endl;
    this->name = obj.getName();
    this->hit_points = obj.getHitPoints();
    this->energy_points = obj.getEnergyPoints();
    this->damage = obj.getDamage();
    return *this;
}

void ClapTrap::attack(const std::string& target){
    if (this->energy_points > 0){
        this->energy_points--;
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!"
                << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " cannot attack anymore!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    if (this->hit_points >= amount){
        this->hit_points -= amount;
        std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " cannot take " << amount << " points of damage!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->energy_points > 0){
        this->energy_points--;
        std::cout << "ClapTrap " << name << " is repaired by " << amount << " points" << std::endl;
        this->hit_points += amount;
    } else {
        std::cout << "ClapTrap " << name << " cannot be repaired anymore!" << std::endl;
    }
}

void ClapTrap::setHitPoints(unsigned int hitPoints) {
    this->hit_points = hitPoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints) {
    this->energy_points = energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage) {
    this->damage = attackDamage;
}

std::string ClapTrap::getName(void) const
{
	return this->name;
}

int ClapTrap::getHitPoints(void) const
{
	return this->hit_points;
}

int ClapTrap::getEnergyPoints(void) const
{
	return this->energy_points;
}
int ClapTrap::getDamage(void) const
{
	return this->damage;
}
