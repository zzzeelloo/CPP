#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : public Claptrap
{
public:
    FragTrap();
    FragTrap(std::string const& name);
    FragTrap(FragTrap const& other);
    FragTrap& operator=(FragTrap const& other);
    ~FragTrap();
    
    void highFivesGuys(void);
};

#endif