/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roger <rogerndaba@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:23:18 by roger             #+#    #+#             */
/*   Updated: 2019/06/03 14:23:20 by roger            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

#ifndef CONTACT_H
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

#endif  // CONTACT_H