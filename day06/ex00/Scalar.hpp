/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 09:37:56 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/13 13:02:39 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <cmath>
#include <fstream>
#include <iostream>

class Scalar {
   private:
    std::string _rawNum;
    // double _num;

   public:
    class NonDisplayableException : std::exception {
       public:
        NonDisplayableException(void);
        NonDisplayableException(NonDisplayableException const &);
        NonDisplayableException &operator=(NonDisplayableException const &);
        virtual const char *what() const throw();
    };

    class ImpossibleException : std::exception {
       public:
        ImpossibleException(void);
        ImpossibleException(ImpossibleException const &);
        ImpossibleException &operator=(ImpossibleException const &);
        virtual const char *what() const throw();
    };

    Scalar(std::string);
    Scalar(Scalar const &);
    Scalar &operator=(Scalar const &);
    ~Scalar();

    char toChar(double);
    int toInt(double);
    double toDouble(double);
    float toFloat(double);
};

#endif  //SCALAR_HPP