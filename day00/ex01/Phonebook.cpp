#include <string.h>
#include <iomanip>
#include <iostream>
#include "Contact.class.cpp"

int main() {
    std::string command;

    Contact phonebook[9];
    int contactCount = 0;
    do {
        if (command == "SEARCH") {
            std::cout << "SEARCH has been called!" << std::endl;
            std::cout << "\033[32m+-------------------------------------------+" << std::endl;
            std::cout << "|\033[\033[33m               CONTACTS LIST               \033[32m|" << std::endl;
            std::cout << "\033[32m+----------+----------+----------+----------+" << std::endl;
            std::cout << "\033[32m|\033[31m   Index  \033[32m|\033[31mFirst Name\033[32m|\033[31mLast Name \033[32m|\033[31mNick Name \033[32m|\033[31m" << std::endl;
            std::cout << "\033[32m+----------+----------+----------+----------+\033[0m" << std::endl;

            int notEmpty = 0;

            for (int i = 0; i < 8; i++) {
                if (phonebook[i].getFirstname() != "" && phonebook[i].getLastname() != "" && phonebook[i].getNickname() != "") {
                    std::cout << "\033[32m|\033[31m" << std::setw(10) << i;
                    std::cout << "\033[32m|\033[31m" << std::setw(10) << phonebook[i].getFirstname().substr(0, 10);
                    std::cout << "\033[32m|\033[31m" << std::setw(10) << phonebook[i].getLastname().substr(0, 10);
                    std::cout << "\033[32m|\033[31m" << std::setw(10) << phonebook[i].getNickname().substr(0, 10);
                    std::cout << "\033[32m|\033[31m" << std::endl;
                    std::cout << "\033[32m+----------+----------+----------+----------+\033[0m" << std::endl;
                    notEmpty++;
                }
            }
            if (notEmpty) {
                std::string sub_command = "";
                std::cout << "Enter index of contact to search for: " << std::endl;
                std::cin >> sub_command;
                int index = std::stoi(sub_command);
                try {
                    std::cout << "\033[32m+----------+----------+----------+----------+" << std::endl;
                    std::cout << "\033[32m|\033[31m" << std::setw(10) << index;
                    std::cout << "\033[32m|\033[31m" << std::setw(10) << phonebook[index].getFirstname().substr(0, 10);
                    std::cout << "\033[32m|\033[31m" << std::setw(10) << phonebook[index].getLastname().substr(0, 10);
                    std::cout << "\033[32m|\033[31m" << std::setw(10) << phonebook[index].getNickname().substr(0, 10);
                    std::cout << "\033[32m|\033[31m" << std::endl;
                    std::cout << "\033[32m+----------+----------+----------+----------+\033[0m" << std::endl;

                } catch (const std::exception& e) {
                    std::cerr << e.what() << '\n';
                }
                command = "";
                continue;
            }

        } else if (command == "ADD") {
            TContact t_contact;

            std::cout << phonebook[0].getContactCount() << std::endl;
            if (phonebook[0].getContactCount() == 8) {
                std::cout << "Phonebook is full." << std::endl;
                command = "";
                continue;
            }

            std::cout << "Add New Contact!!!" << std::endl;

            std::cout << "Please enter firstname: ";
            std::getline(std::cin, t_contact.firstname);
            std::cout << "Please enter lastname: ";
            std::getline(std::cin, t_contact.lastname);
            std::cout << "Please enter nickname: ";
            std::getline(std::cin, t_contact.nickname);
            std::cout << "Please enter login: ";
            std::getline(std::cin, t_contact.login);
            std::cout << "Please enter address: ";
            std::getline(std::cin, t_contact.address);
            std::cout << "Please enter emailAddress: ";
            std::getline(std::cin, t_contact.emailAddress);
            std::cout << "Please enter phoneNumber: ";
            std::getline(std::cin, t_contact.phoneNumber);
            std::cout << "Please enter birthdayDate: ";
            std::getline(std::cin, t_contact.birthdayDate);
            std::cout << "Please enter favoriteMeal: ";
            std::getline(std::cin, t_contact.favoriteMeal);
            std::cout << "Please enter underwear: ";
            std::getline(std::cin, t_contact.underwear);
            std::cout << "Please enter color: ";
            std::getline(std::cin, t_contact.color);
            std::cout << "Please enter darkestSecret: ";
            std::getline(std::cin, t_contact.darkestSecret);

            Contact contact(t_contact);
            phonebook[++contactCount] = contact;
        } else if (command == "REMOVE") {
            std::cout << "REMOVE has been called!" << std::endl;
        }
        std::cout << "\033[36mEnter command -> \033[0m";
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
