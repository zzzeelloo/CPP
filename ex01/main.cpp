#include "PhoneBook.hpp"

int main()
{
    Phonebook   phonebook;
    char *command;

    while (1)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::cin >> command;
        if (command == "ADD")
            phonebook.add();
        else if (command == "SEARCH")
            phonebook.search();
        else if (command == "EXIT")
            phonebook.exit();
        else
            std::cout << "Invalid command. Please try again." << std::endl;
    }
    return 0;
}