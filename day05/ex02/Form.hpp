/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 15:30:51 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/12 16:58:31 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H
#include "Bureaucrat.hpp"

class Form {
   private:
    bool _signed;
    const std::string _name;
    std::string _target;
    const int _toExcecute;
    const int _toSign;

   public:
    class GradeTooHighException : std::exception {
       public:
        GradeTooHighException(void);
        GradeTooHighException(GradeTooHighException const &);
        GradeTooHighException &operator=(GradeTooHighException const &);
        virtual const char *what() const throw();
    };

    class GradeTooLowException : std::exception {
       public:
        GradeTooLowException(void);
        GradeTooLowException(GradeTooLowException const &);
        GradeTooLowException &operator=(GradeTooLowException const &);
        virtual const char *what() const throw();
    };

    class UnsignedException : std::exception {
       public:
        UnsignedException(void);
        UnsignedException(UnsignedException const &);
        UnsignedException &operator=(UnsignedException const &);
        virtual const char *what() const throw();
    };

    Form();
    Form(std::string, std::string, int, int);
    Form(Form const &);
    Form &operator=(Form const &);
    int getToExcecute();
    int getToSign();
    void beSigned(Bureaucrat const &);
    bool getSigned() const;
    std::string getName() const;
    int getToExcecute() const;
    int getToSign() const;
    std::string getTarget() const;
    virtual void execute(Bureaucrat const &) const;
    ~Form();
};

std::ostream &operator<<(std::ostream &, Form const &);

#endif  // !FORM_H