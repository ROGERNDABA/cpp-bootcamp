/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08:33:44 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/11 10:13:27 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    try {
        if (grade < 1) {
            this->GradeTooHighException();
        } else if (grade > 150) {
            this->GradeTooLowException();
        } else {
            this->_grade = grade;
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
    }
}

void Bureaucrat::GradeTooHighException() {
    throw std::exception();
};
void Bureaucrat::GradeTooLowException() {
    throw std::exception();
};

void Bureaucrat::incrementGrade() {
    try {
        if ((this->_grade - 1) < 1) {
            this->GradeTooHighException();
        } else {
            this->_grade--;
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
    }
}

void Bureaucrat::decrementGrade() {
    try {
        if ((this->_grade + 1) > 150) {
            this->GradeTooLowException();
        } else {
            this->_grade++;
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
    }
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : _name(copy._name), _grade(copy._grade) {
    *this = copy;
};
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
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

std::ostream &
operator<<(std::ostream &o, Bureaucrat const &rhs) {
    o << "<" << rhs.getName() << ">, bureaucrat grade <" << rhs.getGrade() << ">";
    return o;
};
