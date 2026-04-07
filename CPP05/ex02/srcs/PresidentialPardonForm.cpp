#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonDemand", 25, 5), _target("undefined_target")
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other.getName(), other.getGradeToSign(), other.getGradeToExecute()), _target(other._target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &other)
{
	(void) other;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonDemand", 25, 5), _target(target)
{
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    this->AForm::CheckEx(executor);
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}