#include <iostream>
#include "Contact.hpp"

int main() {
    std::string command;

    do {
        if (command == "SEARCH") {
            std::cout << "SEARCH has been called!" << std::endl;

            // for (std::vector<TContact>::iterator t = contacts.begin(); t != contacts.end(); ++t) {
            //     std::cout << t->firstname.substr(0, 2) << " " << t->lastname << std::endl;
            // }
            // std::string see;
            // std::getline(std::cin, see);
            // std::cout << see << std::endl;
        } else if (command == "ADD") {
                        std::cout << "Add New Contact!!!" << std::endl;
            std::cout << "Please enter firstname: ";
            // std::getline(std::cin, contact.firstname);
            std::cout << "Please enter lastname: ";
            // std::getline(std::cin, contact.lastname);
            // phonebook.addContact(contact);

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
