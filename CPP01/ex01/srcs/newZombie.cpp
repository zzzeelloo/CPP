#include "../include/Zombie.hpp"
#include <sstream>

Zombie* newZombie( std::string name )
{
    Zombie* new_zombie = new Zombie(name);
    return new_zombie;
}
std::string ft_itoa(int num)
{
    std::ostringstream oss;
    oss << num;
    return oss.str();
}

void Zombie::setName( std::string name )
{
    this->name = name;
}

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
        return NULL;
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        horde[i].setName(name + "_" + ft_itoa(i + 1));
    }
    return horde;
}