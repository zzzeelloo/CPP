#include <iostream>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "Memory adresses : " << "-brain ->"  << &brain << std::endl;
    std::cout << "-stringPTR ->" << &stringPTR << std::endl;
    std::cout << "-stringREF ->" << &stringREF <<  std::endl;

    std::cout << "Value of brain = " << brain << std::endl;
    std::cout << "value pointed by stringPTR = " << *stringPTR << std::endl;
    std::cout << "value pointed by stringREF = " << stringREF << std::endl;

    return(0);
}