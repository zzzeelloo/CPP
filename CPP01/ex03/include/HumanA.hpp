#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class Human_A
{
    public:
    Weapon a_weapon;
    std::string name;
    Human_A(std::string name, Weapon weapon);
    ~Human_A();
    void attack();
};

#endif