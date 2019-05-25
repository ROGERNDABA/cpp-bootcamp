#include <string.h>
#include <iomanip>
#include <iostream>
#include "Contact.class.cpp"

std::string formalizeString(std::string str) {
    if (str.length() >= 10)
        return (str.substr(0, 9).append("."));
    else
        return str;
}

int main() {
    std::string command;

    Contact phonebook[9];
    int contactCount = 0;
    do {
        if (command == "SEARCH") {
            std::cout << "\nSEARCH PHONEBOOK USING INDEX\n\n";
            std::cout << "\033[32m+-------------------------------------------+" << std::endl;
            std::cout << "|\033[\033[33m               CONTACTS LIST               \033[32m|" << std::endl;
            std::cout << "\033[32m+----------+----------+----------+----------+" << std::endl;
            std::cout << "\033[32m|\033[31m   Index  \033[32m|\033[31mFirst Name\033[32m|\033[31mLast Name \033[32m|\033[31mNick Name \033[32m|\033[31m" << std::endl;
            std::cout << "\033[32m+----------+----------+----------+----------+\033[0m" << std::endl;

            int notEmpty = 0;

            for (int i = 0; i < 8; i++) {
                if (phonebook[i].getFirstname() != "" && phonebook[i].getLastname() != "" && phonebook[i].getNickname() != "") {
                    Contact c = phonebook[i];
                    std::cout << "\033[32m|\033[0m" << std::setw(10) << i;

                    std::cout << "\033[32m|\033[0m" << std::setw(10);
                    std::cout << formalizeString(c.getFirstname());

                    std::cout << "\033[32m|\033[0m" << std::setw(10);
                    std::cout << formalizeString(c.getLastname());

                    std::cout << "\033[32m|\033[0m" << std::setw(10);
                    std::cout << formalizeString(c.getNickname());

                    std::cout << "\033[32m|\033[0m" << std::endl;
                    std::cout << "\033[32m+----------+----------+----------+----------+\033[0m" << std::endl;
                    notEmpty++;
                }
            }
            if (notEmpty) {
                std::string sub_command = "";
                std::cout << "\nEnter index of contact to search for: ";
                std::getline(std::cin, sub_command);
                int index = std::stoi(sub_command);
                try {
                    Contact c = phonebook[index];

                    std::cout << "\033[32m+----------+----------+----------+----------+\033[0m" << std::endl;
                    std::cout << "\033[32m|\033[0m" << std::setw(10) << index;

                    std::cout << "\033[32m|\033[0m" << std::setw(10);
                    std::cout << formalizeString(c.getFirstname());

                    std::cout << "\033[32m|\033[0m" << std::setw(10);
                    std::cout << formalizeString(c.getLastname());

                    std::cout << "\033[32m|\033[0m" << std::setw(10);
                    std::cout << formalizeString(c.getNickname());

                    std::cout << "\033[32m|\033[0m" << std::endl;
                    std::cout << "\033[32m+----------+----------+----------+----------+\033[0m" << std::endl;

                } catch (const std::exception& e) {
                    std::cerr << e.what() << '\n';
                }
                command = "";
                continue;
            } else {
                std::cout << "\033[31m Phonebook empty. There's nothing to search\033[0m" << std::endl;
            }

        } else if (command == "ADD") {
            TContact newContact;

            if (phonebook[0].getContactCount() == 8) {
                std::cout << "Phonebook is full." << std::endl;
                command = "";
                continue;
            }

            std::cout << "\nADD NEW CONTACT!!!\n\n";

            std::cout << "Please enter firstname: ";
            std::getline(std::cin, newContact.firstname);
            std::cout << "Please enter lastname: ";
            std::getline(std::cin, newContact.lastname);
            std::cout << "Please enter nickname: ";
            std::getline(std::cin, newContact.nickname);
            std::cout << "Please enter login: ";
            std::getline(std::cin, newContact.login);
            std::cout << "Please enter address: ";
            std::getline(std::cin, newContact.address);
            std::cout << "Please enter emailAddress: ";
            std::getline(std::cin, newContact.emailAddress);
            std::cout << "Please enter phoneNumber: ";
            std::getline(std::cin, newContact.phoneNumber);
            std::cout << "Please enter birthdayDate: ";
            std::getline(std::cin, newContact.birthdayDate);
            std::cout << "Please enter favoriteMeal: ";
            std::getline(std::cin, newContact.favoriteMeal);
            std::cout << "Please enter underwear: ";
            std::getline(std::cin, newContact.underwear);
            std::cout << "Please enter color: ";
            std::getline(std::cin, newContact.color);
            std::cout << "Please enter darkestSecret: ";
            std::getline(std::cin, newContact.darkestSecret);

            Contact contact(newContact);
            phonebook[++contactCount] = contact;
        }
        std::cout << "\033[36mcommand -> \033[0m";
        std::getline(std::cin, command);
    } while (command != "EXIT");

    std::cout << "Goodbye" << std::endl;
    return 0;
}
