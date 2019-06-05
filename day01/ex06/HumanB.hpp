/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmil.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 18:32:19 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/05 18:58:44 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
   private:
    std::string name;
    Weapon *weapon;

   public:
    HumanB(std::string name);
    ~HumanB();
    void setWeapon(Weapon &weapon);
    void attack();
};

#endif  // !HUMANB_HPP