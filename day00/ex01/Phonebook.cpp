#include <iomanip>
#include <iostream>
#include "Contact.class.cpp"

int main() {
    std::string command;

    Contact phonebook[8];
    int contactCount = 0;
    do {
        if (command == "SEARCH") {
            std::cout << "SEARCH has been called!" << std::endl;
            std::cout << "\033[32m+----------+----------+----------+----------+" << std::endl;
            std::cout << "\033[32m|\033[31m   Index  \033[32m|\033[31mFirst Name\033[32m|\033[31mLast Name \033[32m|\033[31mNick Name \033[32m|\033[31m" << std::endl;
            std::cout << "\033[32m+----------+----------+----------+----------+\033[0m" << std::endl;

            for (int i = 0; i < 8; i++) {
                if (phonebook[i].getFirstname() != "" && phonebook[i].getLastname() != "" && phonebook[i].getNickname() != "") {
                    std::cout << "\033[32m|\033[31m" << std::setw(10) << i;
                    std::cout << "\033[32m|\033[31m" << std::setw(10) << phonebook[i].getFirstname().substr(0, 10);
                    std::cout << "\033[32m|\033[31m" << std::setw(10) << phonebook[i].getLastname().substr(0, 10);
                    std::cout << "\033[32m|\033[31m" << std::setw(10) << phonebook[i].getNickname().substr(0, 10);
                    std::cout << "\033[32m|\033[31m" << std::endl;
                    std::cout << "\033[32m+----------+----------+----------+----------+\033[0m" << std::endl;
                }
            }
        } else if (command == "ADD") {
            std::string firstname;
            std::string lastname;
            std::string nickname;
            std::string login;
            std::string address;
            std::string emailAddress;
            std::string phoneNumber;
            std::string birthdayDate;
            std::string favoriteMeal;
            std::string underwear;
            std::string color;
            std::string darkestSecret;

            std::cout << "Add New Contact!!!" << std::endl;

            std::cout << "Please enter firstname: ";
            std::getline(std::cin, firstname);
            std::cout << "Please enter lastname: ";
            std::getline(std::cin, lastname);
            std::cout << "Please enter nickname: ";
            std::getline(std::cin, nickname);
            std::cout << "Please enter login: ";
            std::getline(std::cin, login);
            std::cout << "Please enter address: ";
            std::getline(std::cin, address);
            std::cout << "Please enter emailAddress: ";
            std::getline(std::cin, emailAddress);
            std::cout << "Please enter phoneNumber: ";
            std::getline(std::cin, phoneNumber);
            std::cout << "Please enter birthdayDate: ";
            std::getline(std::cin, birthdayDate);
            std::cout << "Please enter favoriteMeal: ";
            std::getline(std::cin, favoriteMeal);
            std::cout << "Please enter underwear: ";
            std::getline(std::cin, underwear);
            std::cout << "Please enter color: ";
            std::getline(std::cin, color);
            std::cout << "Please enter darkestSecret: ";
            std::getline(std::cin, darkestSecret);

            Contact contact(firstname,
                            lastname,
                            nickname,
                            login,
                            address,
                            emailAddress,
                            phoneNumber,
                            birthdayDate,
                            favoriteMeal,
                            underwear,
                            color,
                            darkestSecret);
            phonebook[++contactCount] = contact;
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
