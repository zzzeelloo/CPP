#include "../includes/Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b1("Alice", 2);
        std::cout << b1.getName() << ", grade: " << b1.getGrade() << std::endl;

        b1.incrementGrade();
        std::cout << "After increment: " << b1.getName() << ", grade: " << b1.getGrade() << std::endl;

        b1.decrementGrade();
        std::cout << "After decrement: " << b1.getName() << ", grade: " << b1.getGrade() << std::endl;

        // This will throw an exception type grade too high
        b1.incrementGrade();
        b1.incrementGrade();
        // std::cout << "nana" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}