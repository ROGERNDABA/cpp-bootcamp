/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmil.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:36:06 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/05 19:04:07 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon) {
    this->name = name;
    std::cout << "Human " << this->name << " is created\n\n";
}

HumanA::~HumanA() {
    std::cout << "\nHuman " << this->name << " is gone\n\n";
}

void HumanA::attack() {
    std::cout << this->name << " attacks with his ";
    std::cout << this->weapon.getType() << std::endl;
}