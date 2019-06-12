/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 16:27:10 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/12 16:44:42 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_HPP
#define SHRUBBERY_CREATION_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
   private:
    static int _toSign;
    static int _toExec;

   public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const &);
    using Form::operator=;
    ~ShrubberyCreationForm();
    virtual void execute(Bureaucrat const &) const;
};

#endif  // !SHRUBBERY_CREATION_HPP