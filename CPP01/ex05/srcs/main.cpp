#include "../include/harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    Harl harl;

    if (argc != 2)
    {
        std::cout << "Usage: ./harlFilter <LEVEL>" << std::endl;
        std::cout << "(levels are : debug, info, warning, error)" << std::endl;
        return 1;
    }

    std::string level = argv[1];

    harl.complain(level);

    return 0;
}