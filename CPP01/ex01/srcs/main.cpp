#include "../include/Zombie.hpp"

int main ( void )
{
    Zombie* zombie_horde = zombieHorde(5, "Zombie_Horde");
    for (int i = 0; i < 5; i++)
        zombie_horde[i].announce();
    delete[] zombie_horde;
    std::cout << "Zombie horde has been freed" << std::endl;
    return (0);
}