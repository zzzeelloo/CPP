#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyDemand", 72, 45), _target("undefined_target")
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other.getName(), other.getGradeToSign(), other.getGradeToExecute()), _target(other._target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &other)
{
	(void) other;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("ShrubberyDemand", 72, 45), _target(target)
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    this->AForm::CheckEx(executor);
    std::cout << "Vrrrrrr" << std::endl;
    std::cout << "Drrr-drrr-drrr" << std::endl; 
    std::cout << "Scrrrape" << std::endl;

    int random  = rand() % 2;

    if(random == 0)
        std::cout << this->_target << "has been robotized succesfully" << std::endl;
    else
        std::cout << this->_target << " has failed to be robotomized." << std::endl;
}