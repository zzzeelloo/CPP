#include "ScalarConverter.hpp"

ScalarConverter::convert(std::string)
{

    size_t i = 0;
        bool f = false; 
        bool dot = false;

    if(str.size() == 1 && !std::isdigit(str[i]) && std::isprint(str[i]))
    {
        charConverter(str[0]);
        return; 
    }

    if (str == "-inff" || str == "+inff" || str == "inff"
	|| str == "nanf" || str == "+nanf" || str == "-nanf")
	{
		std::cout << "float"
			<< std::endl;
		floatConverter(str);
		return;
	}

	if (str == "-inf" || str == "+inf" || str == "inf"
		|| str == "nan" || str == "+nan" || str == "-nan")
	{
		std::cout << "double"
			<< std::endl;
		doubleConverter(str);
		return;
	}

    if(str[0] == '+' || str[0] == '-')
        i++;

    while(str[i] && isdigit(str[i]))
        i++;

        
    if(str[i] != '.' && str[i] != '\0')
    {
        std::cout << "invalid input" << std::endl;
        return;
    }

    if(str[i] == '.')
    {
        if(!isdigit(str[i + 1]))
            std::cout << "need a digit after the '.'" << std::endl;
        dot = true;
        i++;
    }


    while (str[i])
    {
        if (str[i] == 'f')
        {
            if (i < str.size() - 1)
            {
                std::cout << "f finded in the number instead of after it" << std::endl;
                return;
            }
            else 
                f = true;
        }
        i++;
    }

    if (dot == true && f == true)
    {
        floatConverter(str);
        return;
    }

    if(dot == true && f == false)
    {
        doubleConverter(str);
        return;
    }

    intConverter(str);
}