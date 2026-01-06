#include "../include/Zombie.hpp"

Zombie::Zombie( std::string name )
{
    this->name = name;
}

Zombie::Zombie( void )
{
    this->name = "Default_Zombie";
}

Zombie::~Zombie( void )
{
    std::cout << this->name << ": is now dead(a bullet in the forehead)" << std::endl;
}

void Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}