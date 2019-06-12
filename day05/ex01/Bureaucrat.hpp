/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08:32:59 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/12 08:53:34 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat {
    class GradeTooHighException : std::exception {
       public:
        virtual const char *what() const throw();
    };

   private:
    const std::string _name;
    int _grade;

   public:
    Bureaucrat();
    Bureaucrat(std::string, int);
    Bureaucrat(Bureaucrat const &);
    Bureaucrat &operator=(Bureaucrat const &);

    void GradeTooHighException();
    void GradeTooLowException();

    void incrementGrade();
    void decrementGrade();

    const std::string getName() const;
    int getGrade() const;
    // void setName(const std::string &);
    ~Bureaucrat();
};

std::ostream &operator<<(std::ostream &, Bureaucrat const &);
#endif  // !BUREAUCRAT_HPP
