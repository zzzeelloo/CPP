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
        if (command == "ADD") //accepter aussi add en minuscule
            phonebook.add();
        else if (command == "SEARCH") //accepter aussi search en minuscule
            phonebook.search();
        else if (command == "EXIT") //accepter aussi exit en minuscule
            sig = phonebook.exit(sig);
        else
            std::cout << "Invalid command. Please try again." << std::endl;
    }
    std::cout << "Exiting PhoneBook. Goodbye!" << std::endl;
    return 0;
}