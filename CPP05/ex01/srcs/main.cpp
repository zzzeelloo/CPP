#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int main()
{
    try
    {
        Bureaucrat b1("John", 100);
        Form form("Contract", 50, 100);

        std::cout << b1 << std::endl;
        std::cout << form << std::endl;

        b1.signForm(form.getName(), form.getIsSigned());
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}