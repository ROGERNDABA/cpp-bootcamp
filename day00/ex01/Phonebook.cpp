#include "Phonebook.hpp"
#include <iostream>

int main() {
    TContact contact;
    std::string command;

    do {
        if (command == "SEARCH") {
            std::cout << "SEARCH has been called!" << std::endl;
            // std::string see;
            // std::getline(std::cin, see);
            // std::cout << see << std::endl;
        } else if (command == "ADD") {
            std::cout << "ADD has been called!" << std::endl;
        } else if (command == "REMOVE") {
            std::cout << "REMOVE has been called!" << std::endl;
        }
        std::getline(std::cin, command);
        // }
        // std::cout << contact.firstname << std::endl;
        // std::cout << "enter name: ";
    } while (command != "EXIT");

    // std::cout << "Please enter name: ";
    // std::cin >> contact.firstname;
    // std::cout << "Please enter name2: ";
    // std::cin >> contact.lastname;

    return 0;
}
