/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmil.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 19:23:00 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/07 19:30:52 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(/* args */) {}
FragTrap::FragTrap(std::string name) : _name(name) {
    this->_hit = 100;
    this->_maxHit = 100;
    this->_energy = 100;
    this->_maxEnergy = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
}

FragTrap::~FragTrap() {
}
