/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:14:55 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/07 12:13:26 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP
#include <cmath>
#include <iostream>

class Fixed {
   private:
    int _fixedPointValue;
    static const int _nbOfFractBits;

   public:
    Fixed();
    Fixed(int const fpv);
    Fixed(float const fpv);
    Fixed(Fixed const &);
    Fixed &operator=(Fixed const &);
    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits() const;
    void setRawBits(int const raw);
    ~Fixed();
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif  // !FIXED_CLASS_HPP