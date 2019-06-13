/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 09:37:56 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/13 14:32:15 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <climits>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

class Scalar {
   private:
    std::string _rawNum;
    double _num;
    int _precision;

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

    void setPrecision();
    int getPrecision();

    char toChar() const;
    int toInt() const;
    double toDouble() const;
    float toFloat() const;
};

std::ostream &operator<<(std::ostream &, Scalar const &);

#endif  //SCALAR_HPP