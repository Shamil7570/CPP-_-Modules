#include "ClapTrap.hpp"

int main() {
    ClapTrap first("Mike");
    ClapTrap second("Jo");

    first.setAttackDamage(5);
    first.attack(second.getName());
    second.takeDamage(first.getDamage());
    second.beRepaired(5);
    second.setAttackDamage(11);
    second.attack(first.getName());
    first.takeDamage(second.getDamage());
    return 0;
}
