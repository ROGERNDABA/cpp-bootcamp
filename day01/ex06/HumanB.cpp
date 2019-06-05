/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmil.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 18:34:11 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/05 19:04:00 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->name = name;
    std::cout << "Human " << this->name << " is created\n\n";
}

HumanB::~HumanB() {
    std::cout << "\nHuman " << this->name << " is gone\n\n";
}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}

void HumanB::attack() {
    std::cout << this->name << " attacks with his ";
    std::cout << this->weapon->getType() << std::endl;
}