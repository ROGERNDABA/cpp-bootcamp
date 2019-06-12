/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 15:31:44 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/12 14:37:18 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Form::Form() {}
Form::Form() : _signed(false), _name(""), _toExecute(1), _toSign(1) {
}

Form::Form(std::string name, int toSign, int toExecute) : _signed(false),
                                                          _name(name),
                                                          _toExecute(toExecute),
                                                          _toSign(toSign) {
    if (this->_toExecute < 1 || this->_toSign < 1) {
        throw Form::GradeTooHighException();
    } else if (this->_toExecute > 150 || this->_toSign > 150) {
        throw Form::GradeTooLowException();
    }
    return;
}

Form& Form::operator=(Form const& rhs) {
    if (this != &rhs) {
        this->_signed = rhs._signed;
    }
    return *this;
}

Form::Form(Form const& copy) : _name(copy._name),
                               _toExecute(copy._toExecute),
                               _toSign(copy._toSign) {
    *this = copy;
    return;
}

void Form::beSigned(Bureaucrat const& bureaucrat) {
    if (bureaucrat.getGrade() <= _toSign) {
        std::cout << bureaucrat.getName() << " signs " << _name << std::endl;
        this->_signed = true;
    } else {
        std::cout << bureaucrat.getName() << " cannot sign " << _name << " because ";
        throw Form::GradeTooLowException();
    }
}

bool Form::getSigned() const {
    return this->_signed;
};
std::string Form::getName() const {
    return this->_name;
};
int Form::getToExecute() const {
    return this->_toExecute;
};
int Form::getToSign() const {
    return this->_toSign;
};
Form::~Form() {
}

Form::GradeTooHighException::GradeTooHighException() {}

Form::GradeTooHighException::GradeTooHighException(Form::GradeTooHighException const& copy) {
    *this = copy;
}

const char* Form::GradeTooHighException::what() const throw() {
    return ("\033[31mGrade is too high\033[0m");
}

Form::GradeTooHighException& Form::GradeTooHighException::operator=(Form::GradeTooHighException const& rhs) {
    if (this != &rhs) {
    }
    return *this;
}

Form::GradeTooLowException::GradeTooLowException() {}

Form::GradeTooLowException::GradeTooLowException(Form::GradeTooLowException const& copy) {
    *this = copy;
}

const char* Form::GradeTooLowException::what() const throw() {
    return ("\033[31mGrade is too low\033[0m");
}

Form::GradeTooLowException& Form::GradeTooLowException::operator=(Form::GradeTooLowException const& rhs) {
    if (this != &rhs) {
    }
    return *this;
}

std::ostream& operator<<(std::ostream& o, Form const& rhs) {
    o << rhs.getName() << " is " << ((rhs.getSigned()) ? "sigend " : "not signed ")
      << "and needs a grade > " << rhs.getToExecute() << " to execute and a grade > "
      << rhs.getToSign() << " to be signed";
    return o;
};