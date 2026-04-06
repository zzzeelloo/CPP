#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
    private:
    const std::string name;
    bool isSigned;
    const unsigned int gradeToSign;
    const unsigned int gradeToExecute;

    public:
    Form();
    Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExecute);
    Form(const Form &copy);
    ~Form();
    Form &operator=(const Form &copy);

    std::string getName() const;
    bool getIsSigned() const;
    unsigned int getGradeToSign() const;
    unsigned int getGradeToExecute() const;

    void beSigned(const Bureaucrat &b);

    std::ostream &operator<<(std::ostream &out, const Form &form);

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