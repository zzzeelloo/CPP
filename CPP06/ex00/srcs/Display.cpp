#include "../includes/ScalarConverter.hpp"

//cifd

void charConverter(char c)
{
    std::cout << "char: " << c << std::endl;
    if(c < 32)
        std::cout << "Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << 'f' << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void intConverter(std::string str)
{
    long int nb = std::strtol(str.c_str(), NULL, 10);

    std::cout << "char:" << static_cast<char>(nb) << std::endl;
    std::cout << "int:" << nb << std::endl;
    std::cout << "float:" << static_cast<float>(nb) << 'f' << std::endl;
    std::cout << "double:" << static_cast<double>(nb) << std::endl;
}

void floatConverter(std::string str)
{
    float nb = std::strtof(str.c_str(), NULL);

    std::cout << "char:" << static_cast<char>(nb) << std::endl;
    std::cout << "int:" << static_cast<int>(nb) << std::endl;
    std::cout << "float:" << nb << 'f' << std::endl;
    std::cout << "double:" << static_cast<double>(nb) << std::endl;
}

void doubleConverter(std::string str)
{
    double nb = std::strtod(str.c_str(), NULL);

    std::cout << "char:" << static_cast<char>(nb) << std::endl;
    std::cout << "int:" << static_cast<int>(nb) << std::endl;
    std::cout << "float:" << static_cast<float>(nb) << 'f' << std::endl;
    std::cout << "double:" << nb << std::endl;
}