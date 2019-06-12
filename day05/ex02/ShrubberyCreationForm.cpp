/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 16:30:07 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/12 16:50:02 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

int ShrubberyCreationForm::_toExec = 137;
int ShrubberyCreationForm::_toSign = 145;

ShrubberyCreationForm::ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) {
    *this = copy;
    return;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    Form::execute(executor);
    if (executor.getGrade() > this->_toSign || executor.getGrade() > this->_toExec) {
        Form::GradeTooLowException();
    } else {
    
    }
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}
