/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:16:55 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/13 16:41:55 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <cmath>
#include <fstream>
#include <iostream>

class A;
class B;
class C;

class Base {
   private:
   public:
    Base();
    Base(Base const &);
    Base &operator=(Base const &);
    virtual ~Base();
};

#endif  //BASE_HPP