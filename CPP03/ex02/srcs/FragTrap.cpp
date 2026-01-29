#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : Claptrap("default_FragTrap", 100, 100, 30)
{
    std::cout << "FragTrap Default constructor called for Default_FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string const& name) : Claptrap(name, 100, 100, 30)
{
    std::cout << "FragTrap Parameterized constructor called for " << name << std::endl;
}

FragTrap::FragTrap(FragTrap const& other) : Claptrap(other)
{
    std::cout << "FragTrap Copy constructor called for " << other.name << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    std::cout << "FragTrap Assignment operator called for " << other.name << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called for " << name << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " is requesting a high five! ✋" << std::endl;
}