/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08:32:59 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/12 11:31:23 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat {
   private:
    const std::string _name;
    int _grade;

   public:
    class GradeTooHighException : std::exception {
       public:
        GradeTooHighException(void);
        GradeTooHighException(GradeTooHighException const &);
        GradeTooHighException &operator=(GradeTooHighException const &);
        virtual const char *what() const throw();
        virtual ~GradeTooHighException(void);
    };

    class GradeTooLowException : std::exception {
       public:
        GradeTooLowException(void);
        GradeTooLowException(GradeTooLowException const &);
        GradeTooLowException &operator=(GradeTooLowException const &);
        virtual const char *what() const throw();
        virtual ~GradeTooLowException(void);
    };

    Bureaucrat();
    Bureaucrat(std::string, int);
    Bureaucrat(Bureaucrat const &);
    Bureaucrat &operator=(Bureaucrat const &);

    void incrementGrade();
    void decrementGrade();

    const std::string getName() const;
    int getGrade() const;
    // void setName(const std::string &);
    ~Bureaucrat();
};

std::ostream &operator<<(std::ostream &, Bureaucrat const &);
#endif  // !BUREAUCRAT_HPP
