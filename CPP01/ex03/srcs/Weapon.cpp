#include "../include/Weapon.hpp"

void Weapon::setType(std::string new_type)
{
    this->type = new_type;
}

Weapon::Weapon() {}

Weapon::Weapon(std::string new_type)
{
    setType(new_type);
}


Weapon::~Weapon() {}

const std::string Weapon::getType()
{
    return(this->type);
}