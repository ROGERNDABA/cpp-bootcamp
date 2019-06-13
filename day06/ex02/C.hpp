/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:15:24 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/13 16:15:30 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
#define C_HPP

#include <cmath>
#include <fstream>
#include <iostream>

class C {
   private:
   public:
    C();
    C(C const &);
    C &operator=(C const &);
    ~C();
};

#endif  //C_HPP