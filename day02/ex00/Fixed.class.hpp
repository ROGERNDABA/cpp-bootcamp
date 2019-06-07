/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:14:55 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/07 08:47:08 by Roger Ndaba      ###   ########.fr       */
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
    Fixed();
    Fixed(Fixed const &);
    Fixed &operator=(Fixed const &);
    int getRawBits() const;
    void setRawBits(int const raw);
    ~Fixed();
};

#endif  // !FIXED_CLASS_HPP