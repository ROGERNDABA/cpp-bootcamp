/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 10:33:47 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/13 15:03:42 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar(std::string num) : _rawNum(num), _precision(1) {
    try {
        this->_num = stod(num);
        this->setPrecision();
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
    return ("\033[31mimpossible\033[0m");
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

char Scalar::toChar() const {
    char c;
    if (isnan(_num))
        throw Scalar::ImpossibleException();
    c = static_cast<char>(_num);
    if (!isprint(c))
        throw Scalar::NonDisplayableException();
    return c;
}

int Scalar::toInt() const {
    int i;
    if (isnan(_num) || isinf(_num))
        throw Scalar::ImpossibleException();
    if (_num < (double)INT_MIN || _num > (double)INT_MAX)
        throw Scalar::ImpossibleException();
    i = static_cast<int>(_num);
    return i;
};
double Scalar::toDouble() const {
    double d;
    d = static_cast<double>(_num);
    return d;
};
float Scalar::toFloat() const {
    float f;
    f = static_cast<float>(_num);
    return f;
};

void Scalar::setPrecision() {
    for (size_t i = 0; i < _rawNum.length(); i++) {
        if (!isdigit(_rawNum[i]) && _rawNum[i] == '.') {
            i++;
            for (size_t j = i; j < _rawNum.length(); j++) {
                if (isalpha(_rawNum[j]))
                    break;
                this->_precision++;
            }
            this->_precision--;
            return;
        }
    }
}

int Scalar::getPrecision() {
    return this->_precision;
}