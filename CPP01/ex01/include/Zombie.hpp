#include <iostream>
#include <string>
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
    public:
    Zombie( std::string name );
    Zombie( void );
    ~Zombie( void );
    void announce( void );
    void setName( std::string name );

    private :
    std::string name;

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif