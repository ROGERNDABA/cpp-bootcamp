/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 10:33:47 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/13 13:31:02 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar(std::string num) : _rawNum(num) {
    try {
        this->_num = stof(num);
    } catch (const std::exception& e) {
        std::cerr << "Not a literal value" << std::endl;
    }
}

Scalar::NonDisplayableException::NonDisplayableException() {}

Scalar::NonDisplayableException::NonDisplayableException(Scalar::NonDisplayableException const& copy) {
    *this = copy;
}

const char* Scalar::NonDisplayableException::what() const throw() {
    return ("\033[31mNon Displayable\033[0m");
}

Scalar::NonDisplayableException& Scalar::NonDisplayableException::operator=(Scalar::NonDisplayableException const& rhs) {
    if (this != &rhs) {
    }
    return *this;
}

Scalar::ImpossibleException::ImpossibleException() {}

Scalar::ImpossibleException::ImpossibleException(Scalar::ImpossibleException const& copy) {
    *this = copy;
}

const char* Scalar::ImpossibleException::what() const throw() {
    return ("\033[31mImpossible\033[0m");
}

Scalar::ImpossibleException& Scalar::ImpossibleException::operator=(Scalar::ImpossibleException const& rhs) {
    if (this != &rhs) {
    }
    return *this;
}

Scalar::~Scalar() {}

Scalar::Scalar(Scalar const& copy) {
    *this = copy;
};

Scalar& Scalar::operator=(Scalar const& rhs) {
    if (this != &rhs) {
    }
    return *this;
}

char Scalar::toChar() {
    char c;
    if (isnan(_num)) {
        throw Scalar::ImpossibleException();
    }
    c = static_cast<char>(_num);
    return c;
}

int Scalar::toInt() {
        return;
};
double Scalar::toDouble() {
    return;
};
float Scalar::toFloat() {
    return;
};