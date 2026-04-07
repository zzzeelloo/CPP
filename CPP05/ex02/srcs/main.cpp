#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int main()
{
    try
    {
        Bureaucrat b1("John", 100);
        Bureaucrat b2("Jane", 1);
        Form form_nimp("Contract_not_important", 125, 100);
        Form form("Contract", 50, 100);

        std::cout << b1 << std::endl;
        std::cout << form_nimp << std::endl;
        std::cout << form << std::endl;

        b2.signForm(form_nimp);
        b2.signForm(form);
        b1.signForm(form_nimp);
        b1.signForm(form);
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}