#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "Claptrap.hpp"

class ScavTrap : public Claptrap
{
    public: 
        ScavTrap();
        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap& other);
        ScavTrap& operator=(const ScavTrap& other);
        ~ScavTrap();

        void guardGate() const;
        //not asked test purppose
        int getHp() const;
        int getEp() const;
        int getAd() const;
        std::string getName() const;
};
std::ostream& operator<<(std::ostream& os, const ScavTrap& scavTrap);
#endif