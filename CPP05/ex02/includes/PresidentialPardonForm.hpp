#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private: 
    std::string _target;
    public:
    PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &other);
    PresidentialPardonForm &operator=(PresidentialPardonForm &other);
    ~PresidentialPardonForm();
    
    PresidentialPardonForm(std::string target);

    void execute(Bureaucrat const &executor) const;
};