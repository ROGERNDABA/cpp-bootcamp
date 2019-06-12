/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 15:31:44 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/12 13:20:14 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Form::Form() {}
Form::Form() : _signed(false), _toExcecute(1), _toSign(1) {
}

Form::Form(std::string name, int toSign, int toExcecute) : _signed(false) {
    if (toSign < 1 || toExcecute < 1) {
        throw Bureaucrat::GradeTooHighException();
    } else if (toSign > 150 || toExcecute > 150) {
        throw Bureaucrat::GradeTooLowException();
    } else {
        this->setToExcecute(toExcecute);
        // this->_toSign = toSign;
    }
}

void Form::setToExcecute(int const n) {
    this->_toExcecute = n;
}

Form::~Form() {
}