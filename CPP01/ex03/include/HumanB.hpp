#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class Human_B
{
    public:
    Weapon a_weapon;
    std::string mha_weapon;
    std::string name;
    Human_B(std::string name);
    ~Human_B();
    void set_weapon(Weapon weapon);
    void attack();
};

#endif