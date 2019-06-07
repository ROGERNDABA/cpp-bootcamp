/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:14:51 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/07 15:12:30 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_nbOfFractBits = 8;

Fixed::Fixed() : _fixedPointValue(0) {
    return;
}

Fixed::Fixed(int const fpv) {
    this->_fixedPointValue = fpv << this->_nbOfFractBits;
    return;
}

Fixed::Fixed(float const fpv) {
    this->_fixedPointValue = roundf(fpv * (1 << this->_nbOfFractBits));
    return;
}

Fixed::Fixed(Fixed const &copy) : _fixedPointValue(copy._fixedPointValue) {
    *this = copy;
    return;
}

float Fixed::toFloat(void) const {
    return (float)this->_fixedPointValue / (float)(1 << this->_nbOfFractBits);
}
int Fixed::toInt(void) const {
    return this->_fixedPointValue >> this->_nbOfFractBits;
}

Fixed &Fixed::operator=(Fixed const &rhs) {
    if (this != &rhs) {
        this->_fixedPointValue = rhs.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits() const {
    // std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}
void Fixed::setRawBits(int const raw) {
    this->_fixedPointValue = raw;
    return;
}

Fixed::~Fixed() {
    return;
}

bool Fixed::operator<(Fixed const &rhs) const {
    if (this->_fixedPointValue < rhs.getRawBits())
        return true;
    return false;
}
bool Fixed::operator>(Fixed const &rhs) const {
    if (this->_fixedPointValue > rhs.getRawBits())
        return true;
    return false;
}
bool Fixed::operator>=(Fixed const &rhs) const {
    if (this->_fixedPointValue >= rhs.getRawBits())
        return true;
    return false;
}
bool Fixed::operator<=(Fixed const &rhs) const {
    if (this->_fixedPointValue <= rhs.getRawBits())
        return true;
    return false;
}
bool Fixed::operator==(Fixed const &rhs) const {
    if (this->_fixedPointValue == rhs.getRawBits())
        return true;
    return false;
}
bool Fixed::operator!=(Fixed const &rhs) const {
    if (this->_fixedPointValue != rhs.getRawBits())
        return true;
    return false;
}

Fixed Fixed::operator+(Fixed const &rhs) const {
    return (Fixed(this->toFloat() + rhs.toFloat()));
}
Fixed Fixed::operator-(Fixed const &rhs) const {
    return (Fixed(this->toFloat() - rhs.toFloat()));
}
Fixed Fixed::operator*(Fixed const &rhs) const {
    return (Fixed(this->toFloat() * rhs.toFloat()));
}
Fixed Fixed::operator/(Fixed const &rhs) const {
    if (rhs.getRawBits() == 0) {
        std::cout << "Can't" << std::endl;
        return *this;
    }
    return (Fixed(this->toFloat() / rhs.toFloat()));
}
Fixed &Fixed::operator++() {
    this->_fixedPointValue++;
    return *this;
}
Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    this->operator++();
    return (tmp);
}

Fixed &Fixed::operator--() {
    this->_fixedPointValue--;
    return *this;
}
Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    this->operator--();
    return (tmp);
}
Fixed &Fixed::min(Fixed &lhs, Fixed &rhs) {
    return ((lhs < rhs) ? lhs : rhs);
}

const Fixed &Fixed::min(Fixed const &lhs, Fixed const &rhs) {
    return ((lhs < rhs) ? lhs : rhs);
}

Fixed &Fixed::max(Fixed &lhs, Fixed &rhs) {
    return ((lhs > rhs) ? lhs : rhs);
}

const Fixed &Fixed::max(Fixed const &lhs, Fixed const &rhs) {
    return ((lhs > rhs) ? lhs : rhs);
}

std::ostream &
operator<<(std::ostream &o, Fixed const &rhs) {
    o << rhs.toFloat();
    return o;
};
