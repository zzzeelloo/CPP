#include "../includes/Claptrap.hpp"

Claptrap::Claptrap() : name("Default name"), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Claptrap " << name << " constructed with default settings." << std::endl;
}

Claptrap::Claptrap(std::string const& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Claptrap " << name << " constructed." << std::endl;
}

Claptrap::Claptrap(Claptrap const& other)
{
    *this = other;
    std::cout << "Claptrap " << name << " copy constructed." << std::endl;
}

Claptrap& Claptrap::operator=(Claptrap const& other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    std::cout << "Claptrap " << name << " assigned." << std::endl;
    return *this;
}

Claptrap::~Claptrap()
{
    std::cout << "Claptrap " << name << " destructed." << std::endl;
}

void Claptrap::attack(const std::string& target)
{
    if (energyPoints > 0 && hitPoints > 0)
    {
        energyPoints--;
        std::cout << "Claptrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "Claptrap " << name << " has insufficient energy or hit points to attack." << std::endl;
    }
}

void Claptrap::takeDamage(unsigned int amount)
{
    if (hitPoints <= amount)
    {
        hitPoints = 0;
        std::cout << "Claptrap " << name << " takes " << amount << " points of damage and is now destroyed!" << std::endl;
    }
    else
    {
        hitPoints -= amount;
        std::cout << "Claptrap " << name << " takes " << amount << " points of damage, remaining hit points: " << hitPoints << "." << std::endl;
    }
}

void Claptrap::beRepaired(unsigned int amount)
{
    if (energyPoints > 0 && hitPoints > 0)
    {
        energyPoints--;
        hitPoints += amount;
        std::cout << "Claptrap " << name << " is repaired by " << amount << " points, total hit points: " << hitPoints << "." << std::endl;
    }
    else
    {
        std::cout << "Claptrap " << name << " has insufficient energy or hit points to repair." << std::endl;
    }
}