#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string name;
    unsigned int hit_points;
    unsigned int energy_points;
    unsigned int damage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &obj);
    ClapTrap &operator=(const ClapTrap &obj);
    ~ClapTrap();

    std::string getName(void) const;
    int getHitPoints(void) const;
    int getEnergyPoints(void) const;
    int getDamage(void) const;

    void setHitPoints(unsigned int hitPoints);
    void setEnergyPoints(unsigned int energyPoints);
    void setAttackDamage(unsigned int attackDamage);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
