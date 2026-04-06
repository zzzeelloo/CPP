#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat 
{
    private:
    std::string name;
    unsigned int grade;

    public:
    Bureaucrat();
    Bureaucrat(std::string name, unsigned int grade);
    Bureaucrat(const Bureaucrat &copy);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &copy);

    std::string getName() const;
    unsigned int getGrade() const;
    
    void incrementGrade();
    void decrementGrade();

    std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

    void signForm(const std::string& formName, bool isSigned);

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

#endif