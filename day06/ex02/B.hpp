/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:14:38 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/13 16:14:46 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
#define B_HPP

#include <cmath>
#include <fstream>
#include <iostream>

class B {
   private:
   public:
    B();
    B(B const &);
    B &operator=(B const &);
    ~B();
};

#endif  //B_HPP