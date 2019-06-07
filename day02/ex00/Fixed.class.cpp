/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:14:51 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/07 08:52:17 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_nbOfFractBits = 8;

Fixed::Fixed() : _fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy) : _fixedPointValue(copy._fixedPointValue) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &rhs) {
    std::cout << "Assignation operator called" << std::endl;
    if (this == &rhs) {
        return *this;
    }
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}
void Fixed::setRawBits(int const raw) {
    this->_fixedPointValue = raw;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}