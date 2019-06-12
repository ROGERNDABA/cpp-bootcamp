/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08:33:44 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/12 12:41:48 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if (grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    } else if (grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    } else {
        this->_grade = grade;
    }
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(Bureaucrat::GradeTooHighException const& copy) {
    *this = copy;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("\033[31mGrade is too high\033[0m");
}

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const& rhs) {
    if (this != &rhs) {
    }
    return *this;
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException const& copy) {
    *this = copy;
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("\033[31mGrade is too low\033[0m");
}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const& rhs) {
    if (this != &rhs) {
    }
    return *this;
}

void Bureaucrat::incrementGrade() {
    if ((this->_grade - 1) < 1) {
        throw Bureaucrat::GradeTooHighException();
    } else {
        this->_grade--;
    }
}

void Bureaucrat::decrementGrade() {
    if ((this->_grade + 1) > 150) {
        throw Bureaucrat::GradeTooLowException();
    } else {
        this->_grade++;
    }
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const& copy) : _name(copy._name), _grade(copy._grade) {
    *this = copy;
};
Bureaucrat& Bureaucrat::operator=(Bureaucrat const& rhs) {
    if (this != &rhs) {
        this->_grade = rhs.getGrade();
    }
    return *this;
}

const std::string Bureaucrat::getName() const {
    return this->_name;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

std::ostream&
operator<<(std::ostream& o, Bureaucrat const& rhs) {
    o << "<" << rhs.getName() << ">, bureaucrat grade <" << rhs.getGrade() << ">";
    return o;
};
