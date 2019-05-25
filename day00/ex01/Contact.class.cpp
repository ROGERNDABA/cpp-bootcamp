#include "Contact.h"

class Contact {
   private:
    TContact contact;

    static int contactCount;

   public:
    Contact(TContact);

    std::string getFirstname() { return this->contact.firstname; };
    std::string getLastname() { return this->contact.lastname; };
    std::string getNickname() { return this->contact.nickname; };
    // std::string getLogin() { return this->login; };
    // std::string getAddress() { return this->address; };
    // std::string getEmailAddress() { return this->emailAddress; };
    // std::string getPhoneNumber() { return this->phoneNumber; };
    // std::string getBirthdayDate() { return this->birthdayDate; };
    // std::string getFavoriteMeal() { return this->favoriteMeal; };
    // std::string getUnderwear() { return this->underwear; };
    // std::string getColor() { return this->color; };
    // std::string getDarkestSecret() { return this->darkestSecret; };
    int getContactCount() { return this->contactCount; };

    Contact();
    ~Contact();
};

int Contact::contactCount = 0;

Contact::Contact(TContact contact) {
    this->contact = contact;
    Contact::contactCount++;
}

Contact::Contact(){};

Contact::~Contact() {}
