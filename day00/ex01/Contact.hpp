#include <iostream>
#include <vector>

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

Contact::~Contact() {}
