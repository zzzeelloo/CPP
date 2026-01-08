#include <string>
#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Error: Invalid number of arguments." << std::endl;
        return 1;
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ifstream infile(filename);
    if (!infile)
    {
        std::cout << "Error: Could not open file " << filename << std::endl;
        return 1;
    }
    else
    {
        std::string content;
        std::string line;
        while (std::getline(infile, line))
        {
            std::string new_line;
            size_t pos = 0;
            size_t found = 0;
            while ((found = line.find(s1, pos)) != std::string::npos)
            {
                new_line += line.substr(pos, found - pos);
                new_line += s2;
                pos = found + s1.length();
            }
            new_line += line.substr(pos);
            content += new_line + "\n";
        }
        infile.close();
        std::ofstream outfile(filename + ".replace");
        if (!outfile)
        {
            std::cout << "Error: Could not create output file." << std::endl;
            return 1;
        }
        outfile << content;
        outfile.close();
    }
    return 0;
}