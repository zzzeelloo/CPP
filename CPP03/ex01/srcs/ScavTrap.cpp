#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : Claptrap("name_default", 100, 50, 20)
{
    std::cout << "ScavTrap " << "name_default" << " constructed with default settings." << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : Claptrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap " << name << " constructed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : Claptrap(other)
{
    std::cout << "ScavTrap  copy constructed." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        Claptrap::operator=(other);
    }
    std::cout << "ScavTrap " << name << " assigned." << std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructed." << std::endl;
}

void ScavTrap::guardGate() const
{
    std::cout << "ScavTrap is now in Gate Keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    Claptrap::attack(target);
}

int ScavTrap::getHp() const
{
    return(this->hitPoints);
}

int ScavTrap::getEp() const
{
    return(this->energyPoints);
}

int ScavTrap::getAd() const
{
    return(this->attackDamage);
}

std::string ScavTrap::getName() const
{
    return this->name;
}

std::ostream& operator<<(std::ostream& os, const ScavTrap& scavTrap)
{
    os << "ScavTrap " << scavTrap.getName() << " HP: " << scavTrap.getHp()
       << ", EP: " << scavTrap.getEp() << ", AD: " << scavTrap.getAd() << "]";
    return os;
}
