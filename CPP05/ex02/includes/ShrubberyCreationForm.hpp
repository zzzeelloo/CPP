#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    private: 
    std::string _target;
    public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &other);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm &other);
    ~ShrubberyCreationForm();
    
    ShrubberyCreationForm(std::string target);

    void execute(Bureaucrat const &executor) const;
};