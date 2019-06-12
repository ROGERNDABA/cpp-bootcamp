/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 15:30:51 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/11 15:35:51 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H
#include "Bureaucrat.hpp"

class Form {
   private:
    bool _signed;
    const std::string _name;
    const int _toSign;
    const int _toExcecute;

   public:
    Form();
    ~Form();
};

#endif  // !FORM_H