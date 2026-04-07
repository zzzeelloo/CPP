#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private: 
    std::string _target;
    public:
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &other);
    RobotomyRequestForm &operator=(RobotomyRequestForm &other);
    ~RobotomyRequestForm();
    
    RobotomyRequestForm(std::string target);

    void execute(Bureaucrat &executor) const;
};