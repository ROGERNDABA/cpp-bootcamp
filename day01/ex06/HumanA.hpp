/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmil.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:34:53 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/05 18:58:37 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
   private:
    std::string name;
    Weapon &weapon;
    /* data */
   public:
    HumanA(/* args */);
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack();
};

#endif  // !HUMANA_HPP
