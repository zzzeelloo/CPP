#include "../includes/Phonebook.hpp"

int main()
{
    Phonebook   phonebook;
    std::string command;
    int sig = 1;

    while (sig)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        if (command == "ADD" || command == "add")
            phonebook.add();
        else if (command == "SEARCH" || command == "search")
            phonebook.search();
        else if (command == "EXIT" || command == "exit")
            sig = 0;
        else
            std::cout << "Invalid command. Please try again." << std::endl;
    }
    std::cout << "Exiting PhoneBook. Goodbye!" << std::endl;
    return 0;
}