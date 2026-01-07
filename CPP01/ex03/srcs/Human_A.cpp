#include "../include/Weapon.hpp"
#include "../include/HumanA.hpp"

Human_A::Human_A(std::string name, Weapon weapon)
{
    this->a_weapon = weapon;
    this->name = name;
}


Human_A::~Human_A() {}

void Human_A::attack()
{
    std::cout << this->name << " attacks with their " << this->a_weapon.getType() << std::endl;
}