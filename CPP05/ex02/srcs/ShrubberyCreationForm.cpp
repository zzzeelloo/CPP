#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyDemand", 145, 137), _target("undefined_target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other.getName(), other.getGradeToSign(), other.getGradeToExecute()), _target(other._target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &other)
{
	(void) other;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyDemand", 145, 137), _target(target)
{
}
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    this->AForm::CheckEx(executor);
    std::ofstream fileout((this->_target + "_shrubbery").c_str());

    if (!fileout.is_open())
        throw (FileNotOpen());

    fileout << " ASCII master tree/\n";
    fileout << " ├─ Mini ASCII B\n";
    fileout << " ├─ Mini ASCII A\n";
    fileout << " ├─ Mini ASCII C\n";
    fileout << " ├─ ASCII tree boz/\n";
    fileout << " │  ├─ ASCII  mega boz\n";
    fileout << " │  ├─ ASCII  giga boz\n";
    fileout << " │  ├─ ASCII  nano boz\n";

    fileout.close();
}

