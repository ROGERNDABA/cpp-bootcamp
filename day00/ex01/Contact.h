#include <iostream>
#include <vector>

#if !defined(CONTACT_H)
#define CONTACT_H

typedef struct SContact {
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
} TContact;

#endif  // CONTACT_H