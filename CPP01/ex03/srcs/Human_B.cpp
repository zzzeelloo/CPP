#include "../include/Weapon.hpp"
#include "../include/HumanB.hpp"

Human_B::Human_B(std::string name)
{
    this->name = name;
}

Human_B::~Human_B() {}

void Human_B::set_weapon(Weapon weapon)
{
    this->a_weapon = weapon;
}

void Human_B::attack()
{
    std::cout << this->name << " attacks with their " << this->a_weapon.getType() << std::endl;
}