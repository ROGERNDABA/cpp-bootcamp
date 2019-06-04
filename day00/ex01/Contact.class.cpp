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

#include "Contact.hpp"

int Contact::contactCount = 0;

Contact::Contact(TContact contact) {
    this->contact = contact;
    Contact::contactCount++;
}

Contact::Contact(){};

Contact::~Contact() {}
