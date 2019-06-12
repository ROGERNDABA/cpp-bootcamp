/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 15:30:51 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/12 13:16:48 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H
#include "Bureaucrat.hpp"

class Form : public Bureaucrat {
   private:
    bool _signed;
    const std::string _name;
    const int _toExcecute;
    const int _toSign;

   public:
    Form();
    Form(std::string, int, int);
    void setToExcecute(int const toExcecute);
    void setToSign(int const toSign);
    ~Form();
};

#endif  // !FORM_H