#include <iostream>
#include <string.h>
#include <cstdlib>

#define MAX_TAB 8

std::string formatField(const std::string &src)
{
    if (src.size() > 10)
        return src.substr(0, 9) + ".";

    return src + std::string(10 - src.size(), ' ');
}

class Contact
{
    //Contact() {};
    private :
                std::string first_name;
                std::string last_name;
                std::string nick_name;
                std::string phone_num;
                std::string secret;
    public :
    //setter
    void set(std::string f_name, std::string l_name, std::string n_name, std::string phone, std::string s)
    {
        first_name = f_name;
        last_name = l_name;
        nick_name = n_name;
        phone_num = phone;
        secret = s;
    }
    //getter
    const std::string &get_first_name() const { return first_name; }
    const std::string &get_last_name() const { return last_name; }
    const std::string &get_nick_name() const { return nick_name; }
     const std::string &get_phone_number() const { return phone_num; }
    const std::string &get_secret() const { return secret; }

};

class Phonebook 
{
    private :
                Contact phone_book[8];
                unsigned int idx;
                unsigned int n_contact;
                
    public:
                Phonebook() : idx(0), n_contact(0) {}
                void    add()
                {
                    std::string f, l, n, p, s;
                    while(f.size() == 0)
                    {
                        std::cout << "First name: ";
                        std::cin >> f;
                    }
                    while(l.size() == 0)
                    {
                        std::cout << "Last name: ";
                        std::cin >> l;
                    }
                    while(n.size() == 0)
                    {
                        std::cout << "Nick name: ";
                        std::cin >> n;
                    }
                    while(p.size() == 0)
                    {
                        std::cout << "Phone number: ";
                        std::cin >> p;
                    }
                    while(s.size() == 0)
                    {
                        std::cout << "Darkest secret: ";
                        std::cin >> s;
                    }
                    phone_book[idx % MAX_TAB].set(f, l, n, p, s);
                    idx++;
                    if (n_contact < MAX_TAB)
                        n_contact++;
                }

                void    search()
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
                int exit(int sig)
                {
                    sig = 0;
                    return(sig);
                }
};
