#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

#define m_debug "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
#define m_info "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define m_warning "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
#define m_error "This is unacceptable! I want to speak to the manager now."

class Harl {
    public:
        Harl();
        ~Harl(); 
        void complain(std::string level);
    private:
        void debug();
        void info();
        void warning();
        void error();
};

typedef void(Harl::*p_m_func)(void);
#endif