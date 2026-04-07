#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <cstdlib>

class Bureaucrat;

class AForm
{
    private:
    const std::string name;
    bool isSigned;
    const  int gradeToSign;
    const  int gradeToExecute;

    public:
    AForm();
    AForm(std::string name, int gradeToSign, int gradeToExecute);
    AForm(const AForm &copy);
    virtual ~AForm();
    AForm &operator=(const AForm &copy);

    std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    virtual void beSigned(Bureaucrat const &b);
    virtual void execute(Bureaucrat const &executor) const = 0;
    void CheckEx(Bureaucrat const &executor) const;

    
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
    
    class FileNotOpen : public std::exception
    {
        public:
        const char * what() const throw();
    };

    class FormNotSigned : public std::exception
    {
        public:
        const char * what() const throw();
    };  
    
};

std::ostream &operator<<(std::ostream &out, const AForm &Aform);

#endif