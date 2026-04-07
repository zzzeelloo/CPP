#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <iostream>

class Bureaucrat 
{
    private:
    std::string name;
    unsigned int grade;

    public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &copy);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &copy);

    std::string getName() const;
    int getGrade() const;
    
    void incrementGrade();
    void decrementGrade();

    
    void signForm(AForm &AForm);
    void executeForm(AForm &AForm);
    
    class GradeTooHighException : public std::exception
    {
        public:
        const char* what() const throw();
    };
    
    class GradeTooLowException : public std::exception
    {
        public:
        const char* what() const throw();
    };
    
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif