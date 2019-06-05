/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:29:34 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/05 12:23:41 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
   private:
    std::string type;

   public:
    Weapon(/* args */);
    Weapon(std::string type);
    ~Weapon();
    std::string getType() const;
    void setType(std::string);
};

#endif  // !WEAPON_HPP