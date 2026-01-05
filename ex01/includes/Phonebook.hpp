# ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string.h>
#include <cstdlib>

#define MAX_TAB 8

class Phonebook 
{
    private :
                Contact phone_book[8];
                unsigned int n_contact;
                unsigned int idx;
                
    public:
                Phonebook();
                ~Phonebook();
                void    add();
                void    search();
                int exit(int sig);
};

#endif