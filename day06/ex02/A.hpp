/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:13:58 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/13 16:14:01 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
#define A_HPP

#include <cmath>
#include <fstream>
#include <iostream>

class A {
   private:
   public:
    A();
    A(A const &);
    A &operator=(A const &);
    ~A();
};

#endif  //A_HPP