#ifndef SCAVRTAP__HPP
# define SCAVRTAP__HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(const std::string name);
    ScavTrap();
    ScavTrap(const ScavTrap& obj);
    ~ScavTrap();
    
    ScavTrap &operator=(const ScavTrap& obj);

    void attack(const std::string &target);
    void guardGate();
};

#endif