/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roger <rogerndaba@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:23:11 by roger             #+#    #+#             */
/*   Updated: 2019/06/03 14:23:12 by roger            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    std::string getLogin() { return this->contact.login; };
    std::string getAddress() { return this->contact.address; };
    std::string getEmailAddress() { return this->contact.emailAddress; };
    std::string getPhoneNumber() { return this->contact.phoneNumber; };
    std::string getBirthdayDate() { return this->contact.birthdayDate; };
    std::string getFavoriteMeal() { return this->contact.favoriteMeal; };
    std::string getUnderwear() { return this->contact.underwear; };
    std::string getColor() { return this->contact.color; };
    std::string getDarkestSecret() { return this->contact.darkestSecret; };
    int getContactCount() { return this->contactCount; };

    Contact(void);
    ~Contact();
};

int Contact::contactCount = 0;

Contact::Contact(TContact contact) {
    this->contact = contact;
    Contact::contactCount++;
}

Contact::Contact(void){};

Contact::~Contact() {}
