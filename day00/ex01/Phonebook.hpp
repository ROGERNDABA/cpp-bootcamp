#include "Contact.h"

class Phonebook {
   private:
    TContact contact;

    static std::vector<TContact> contactList;
    static int numberOfContacts;

   public:
    Phonebook(TContact contact);
    int addContact(TContact contact);
    ~Phonebook();
};

std::vector<TContact> Phonebook::contactList = {};
int Phonebook::numberOfContacts = 0;

// Phonebook::Phonebook(TContact contact) {
//     Phonebook::numberOfContacts++;
// }

Phonebook::~Phonebook() {
}

// int Phonebook::addContact(TContact contact) {
//     // return 1;
// }
