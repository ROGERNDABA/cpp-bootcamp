/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:14:55 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/06 12:18:09 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP
#include <iostream>

class Fixed {
   private:
    int _fixedPointValue;
    static const int _nbOfFractBits;

   public:
    Fixed(void);
    Fixed(int);
    ~Fixed();
};

#endif  // !FIXED_CLASS_HPP