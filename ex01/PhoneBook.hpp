#include <iostream>
#include <string.h>

#define MAX_TAB 8

void    ft_strncpy(std::string &dest, const std::string &src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n - 1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n - 1)
    {
        dest[i] = ' ';
        i++;
        if(i == n - 1 && src[i] != '\0')
            dest[i] = '.';
    }
    dest[i] = '\0';
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
    void set(std::string f_name, std::string l_name, std::string n_name, std::string phone, std::string s)
    {
        first_name = f_name;
        last_name = l_name;
        nick_name = n_name;
        phone_num = phone;
        secret = s;
    }
    void get_first_name(char *buf, unsigned int size)
    {
        ft_strncpy(buf, first_name, size);
    }
    void get_last_name(char *buf, unsigned int size)
    {
        ft_strncpy(buf, last_name, size);
    }
    void get_nick_name(char *buf, unsigned int size)
    {
        ft_strncpy(buf, nick_name, size);
    }

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
                    char *f, *l, *n, *p, *s;

                    std::cout << "First name: ";
                    std::cin >> f;
                    std::cout << "Last name: ";
                    std::cin >> l;
                    std::cout << "Nick name: ";
                    std::cin >> n;
                    std::cout << "Phone number: ";
                    std::cin >> p;
                    std::cout << "Darkest secret: ";
                    std::cin >> s;
                    phone_book[idx % MAX_TAB].set(f, l, n, p, s);
                    idx++;
                    if (n_contact < MAX_TAB)
                        n_contact++;
                }

                void    search()
                {
                    char buf[11];
                    for (unsigned int i = 0; i < n_contact; i++)
                    {
                        std::cout << i << "|";

                        phone_book[i].get_first_name(buf, 10);
                        std::cout << buf << "|";
                        phone_book[i].get_last_name(buf, 10);
                        std::cout << buf << "|";
                        phone_book[i].get_nick_name(buf, 10);
                        std::cout << buf << std::endl;
                    }
                }
};
