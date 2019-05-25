#include <iostream>
#include <vector>
#include "Contact.h"

class Contact {
   private:
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

   public:
    Contact(std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string);

    std::string getFirstname() { return this->firstname; };
    std::string getLastname() { return this->lastname; };
    std::string getNickname() { return this->nickname; };
    // std::string getLogin() { return this->login; };
    // std::string getAddress() { return this->address; };
    // std::string getEmailAddress() { return this->emailAddress; };
    // std::string getPhoneNumber() { return this->phoneNumber; };
    // std::string getBirthdayDate() { return this->birthdayDate; };
    // std::string getFavoriteMeal() { return this->favoriteMeal; };
    // std::string getUnderwear() { return this->underwear; };
    // std::string getColor() { return this->color; };
    // std::string getDarkestSecret() { return this->darkestSecret; };

    Contact();
    ~Contact();
};

Contact::Contact(
    std::string firstname,
    std::string lastname,
    std::string nickname,
    std::string login,
    std::string address,
    std::string emailAddress,
    std::string phoneNumber,
    std::string birthdayDate,
    std::string favoriteMeal,
    std::string underwear,
    std::string color,
    std::string darkestSecret) {
    this->firstname = firstname;
    this->lastname = lastname;
    this->nickname = nickname;
    this->login = login;
    this->address = address;
    this->emailAddress = emailAddress;
    this->phoneNumber = phoneNumber;
    this->birthdayDate = birthdayDate;
    this->favoriteMeal = favoriteMeal;
    this->underwear = underwear;
    this->color = color;
    this->darkestSecret = darkestSecret;
}

Contact::Contact(){};

Contact::~Contact() {}
