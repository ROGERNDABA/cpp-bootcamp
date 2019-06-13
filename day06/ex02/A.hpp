/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:13:58 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/13 16:43:19 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
#define A_HPP
#include "Base.hpp"

class A : public Base {
   private:
   public:
    A();
    A(A const &);
    using Base::operator=;
    ~A();
};

#endif  //A_HPP