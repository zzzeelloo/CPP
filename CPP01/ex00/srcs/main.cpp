#include "../include/Zombie.hpp"

int main ( void )
{
    Zombie* zombie1 = newZombie("Heap_Zombie");
    randomChump("Stack_Zombie");

    zombie1->announce();
    delete zombie1;
    std::cout << "Heap_Zombie has been freed" << std::endl;
    
    return (0);
}