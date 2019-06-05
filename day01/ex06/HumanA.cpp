/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:36:06 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/05 11:46:01 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA() {}

HumanA::HumanA(std::string name, Weapon weapon) : weapon(weapon) {
    this->name = name;
}

HumanA::~HumanA() {
}

void HumanA::attack() {
    std::cout << this->name << " attacks with his ";
    std::cout << this->weapon.getType() << std::endl;
}