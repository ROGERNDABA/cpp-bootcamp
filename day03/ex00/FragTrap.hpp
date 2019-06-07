/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmil.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 19:15:18 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/07 19:34:18 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

class FragTrap {
   private:
    std::string _name;
    int _hit;
    int _maxHit;
    int _energy;
    int _maxEnergy;
    int _level;
    int _meleeAttackDamage;
    int _rangedAttackDamage;
    int _armorDamageReduction;

   public:
    FragTrap();
    FragTrap(std::string);
    ~FragTrap();
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
#endif  // !FRAGTRAP_HPP