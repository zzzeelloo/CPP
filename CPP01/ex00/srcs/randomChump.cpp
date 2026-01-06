#include "../include/Zombie.hpp"

void randomChump( std::string name )
{
    Zombie  zombie(name);
    zombie.announce();
    //std::cout << name << " is now dead(a bullet in the forehead)" << std::endl;
}