#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string.h>
#include <cstdlib>

class Contact
{
    private :
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_num;
    std::string secret;
    public :
    Contact();
    ~Contact();
    //setter
    void set(std::string f_name, std::string l_name, std::string n_name, std::string phone, std::string s);
    //getter
    const std::string &get_first_name() const;
    const std::string &get_last_name() const;
    const std::string &get_nick_name() const;
    const std::string &get_phone_number() const;
    const std::string &get_secret() const;
};

#endif