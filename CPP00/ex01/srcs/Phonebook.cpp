#include "Phonebook.hpp"
#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <limits>

std::string formatField(const std::string &src)
{
    if (src.size() > 10)
        return src.substr(0, 9) + ".";

    return src + std::string(10 - src.size(), ' ');
}

Phonebook::Phonebook() : n_contact(0), idx(0) {}

Phonebook::~Phonebook() {}

void   Phonebook::add()
{
                    std::string f, l, n, p, s;
                    while(f.size() == 0)
                    {
                        std::cout << "First name: ";
                        std::getline(std::cin, f);
                    }
                    while(l.size() == 0)
                    {
                        std::cout << "Last name: ";
                        std::getline(std::cin, l);
                    }
                    while(n.size() == 0)
                    {
                        std::cout << "Nick name: ";
                        std::getline(std::cin, n);
                    }
                    while(p.size() == 0)
                    {
                        std::cout << "Phone number: ";
                        std::getline(std::cin, p);
                    }
                    while(s.size() == 0)
                    {
                        std::cout << "Darkest secret: ";
                        std::getline(std::cin, s);
                    }
                    phone_book[idx % MAX_TAB].set(f, l, n, p, s);
                    idx++;
                    if (n_contact < MAX_TAB)
                        n_contact++;
}

void Phonebook::search()
{
    std::string buf;
    for (unsigned int i = 0; i < n_contact; i++) // peut etre idx % MAX_TAB
    {
        std::cout << i << std::string(8, ' ') + "|";

        std::cout << formatField(phone_book[i].get_first_name()) << "|";
        std::cout << formatField(phone_book[i].get_last_name()) << "|";
        std::cout << formatField(phone_book[i].get_nick_name()) << std::endl;
        }
        std::cout << "Enter index to display contact details: ";
        std::cin >> buf;
        int index = -1;
        index = atoi(buf.c_str());
        if (index < 0 || index >= static_cast<int>(n_contact))
        {
            std::cout << "Invalid index." << std::endl;
            return;
        }
        std::cout << "First name: " << phone_book[index].get_first_name() << std::endl;
        std::cout << "Last name: " << phone_book[index].get_last_name() << std::endl;
        std::cout << "Nick name: " << phone_book[index].get_nick_name() << std::endl;
        std::cout << "Phone number: " << phone_book[index].get_phone_number() << std::endl;
        std::cout << "Darkest secret: " << phone_book[index].get_secret() << std::endl; 
}

int Phonebook::exit(int sig)
{
    sig = 0;
    return(sig);
}