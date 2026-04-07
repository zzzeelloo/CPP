#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"

AForm::AForm() : name("Default"), isSigned(false), gradeToSign(150), gradeToExecute(150)
{
    std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute)
    : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout << "AForm parameterized constructor called" << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm& other)
    : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
    std::cout << "AForm copy constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& other)
{
    std::cout << "AForm copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->isSigned = other.isSigned;
    }
    return *this;
}

AForm::~AForm()
{
    std::cout << "AForm destructor called" << std::endl;
}

std::string AForm::getName() const
{
    return name;
}

bool AForm::getIsSigned() const
{
    return isSigned;
}

int AForm::getGradeToSign() const
{
    return gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return gradeToExecute;
}

void AForm::beSigned(Bureaucrat const &bureaucrat)
{
    if (bureaucrat.getGrade() > gradeToSign)
        throw GradeTooLowException();
    isSigned = true;
}

void AForm::CheckEx(Bureaucrat const &executor) const
{
    if(this->isSigned == false)
        throw FormNotSigned();
    if(executor.getGrade() < this->getGradeToExecute())
        throw GradeTooLowException();
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char *AForm::FormNotSigned::what() const throw()
{
    return "Can't execute form who isn't signed !";
}

const char* AForm::FileNotOpen::what() const throw()
{
    return "Error with the creation of outfile";
}

std::ostream& operator<<(std::ostream& os, const AForm& Aform)
{
    os << "AForm: " << Aform.getName() << ", Signed: " << (Aform.getIsSigned() ? "Yes" : "No")
       << ", Grade to Sign: " << Aform.getGradeToSign() << ", Grade to Execute: " << Aform.getGradeToExecute();
    return os;
}