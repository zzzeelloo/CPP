#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class Claptrap
{
    protected:
        std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;
    public:
        Claptrap();
        Claptrap(std::string const& name);
        Claptrap(std::string const& name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage);

        Claptrap(Claptrap const& other);
        Claptrap& operator=(Claptrap const& other);

        ~Claptrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif