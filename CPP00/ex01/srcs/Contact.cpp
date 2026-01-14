#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

//setter
void Contact::set(std::string f_name, std::string l_name, std::string n_name, std::string phone, std::string s)
{
    first_name = f_name;
    last_name = l_name;
    nick_name = n_name;
    phone_num = phone;
    secret = s;
}

//getter
const std::string &Contact::get_first_name() const { return first_name; }

const std::string &Contact::get_last_name() const { return last_name; }

const std::string &Contact::get_nick_name() const { return nick_name; }

const std::string &Contact::get_phone_number() const { return phone_num; }

const std::string &Contact::get_secret() const { return secret; }


