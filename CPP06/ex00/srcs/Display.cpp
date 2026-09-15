/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Display.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherif <zcherif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 19:39:58 by zcherif           #+#    #+#             */
/*   Updated: 2026/09/15 19:39:59 by zcherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"
#include <cmath>

void charConverter(char c)
{
    if(c < 32)
        std::cout  << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << c << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << 'f' << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void intConverter(std::string str)
{
    long int nb = std::strtol(str.c_str(), NULL, 10);
    if(nb > std::numeric_limits<int>::max() || nb < std::numeric_limits<int>::min())
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: overflow cant convert" << std::endl;
        std::cout << "float: " << static_cast<float>(nb) << 'f' << std::endl;
        std::cout << "double: " << static_cast<double>(nb) << std::endl;
        return;
    }

    if(nb < 32 || nb > 126)
        std::cout  << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(nb) << std::endl;
    std::cout << "int: " << nb << std::endl;
    std::cout << "float: " << static_cast<float>(nb) << 'f' << std::endl;
    std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

void floatConverter(std::string str)
{
    float nb = std::strtof(str.c_str(), NULL);
    
    if(nb != nb || nb > std::numeric_limits<float>::max() || nb < -std::numeric_limits<float>::max())
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << nb << 'f' << std::endl;
        std::cout << "double: " << static_cast<double>(nb) << std::endl;
        return;
    }
    
    if(nb > std::numeric_limits<int>::max() || nb < std::numeric_limits<int>::min())
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: overflow cant convert" << std::endl;
        std::cout << "float: " << nb << 'f' << std::endl;
        std::cout << "double: " << static_cast<double>(nb) << std::endl;
        return;
    }

    if(nb < 32 || nb > 126)
        std::cout  << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(nb) << std::endl;
    std::cout << "int: " << static_cast<int>(nb) << std::endl;
    std::cout << "float: " << nb << 'f' << std::endl;
    std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

void doubleConverter(std::string str)
{
    double nb = std::strtod(str.c_str(), NULL);
    
    if(nb != nb || nb > std::numeric_limits<double>::max() || nb < -std::numeric_limits<double>::max())
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << static_cast<float>(nb) << 'f' << std::endl;
        std::cout << "double: " << nb << std::endl;
        return;
    }
    
    if(nb < 32 || nb > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(nb) << std::endl;

    if(nb > std::numeric_limits<int>::max() || nb < std::numeric_limits<int>::min())
        std::cout << "int: overflow cant convert" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(nb) << std::endl;

    std::cout << "float: " << static_cast<float>(nb) << 'f' << std::endl;
    std::cout << "double: " << nb << std::endl;
}