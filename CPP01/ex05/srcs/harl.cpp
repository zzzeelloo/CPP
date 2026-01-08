#include "../include/harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug() 
{
    std::cout << m_debug << std::endl;
}
void Harl::info() 
{
    std::cout << m_info << std::endl;
}
void Harl::warning() 
{
    std::cout << m_warning << std::endl;
}
void Harl::error() 
{
    std::cout << m_error <<  std::endl;
}

void Harl::complain(std::string level)
{
    size_t i = 0;
    p_m_func func[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[4] = {"debug", "info", "warning", "error"};

    while (i < 4)
    {
        if(levels[i] == level)
        {
            ((this)->*func[i])();
        }
        i++;
    }

}
