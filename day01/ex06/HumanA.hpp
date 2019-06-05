/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:34:53 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/05 11:45:43 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.cpp"

class HumanA {
   private:
    std::string name;
    const Weapon weapon;
    /* data */
   public:
    HumanA(/* args */);
    HumanA(std::string name, Weapon weapon);
    ~HumanA();
    void attack();
};

#endif  // !HUMANA_HPP
