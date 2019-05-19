#include "Phonebook.hpp"
#include <iostream>

int main() {
    TContact contact;
    std::string name;

    do {
        std::cout << name << std::endl;
        std::cout << "enter name: ";
        std::getline(std::cin, name);

    } while (name != "Exit");

    // std::cout << "Please enter name: ";
    // std::cin >> contact.firstname;
    // std::cout << "Please enter name2: ";
    // std::cin >> contact.lastname;

    return 0;
}
