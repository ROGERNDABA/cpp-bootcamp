/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:19:20 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/13 16:45:11 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base() {}

Base::Base(Base const& copy) {
    *this = copy;
};

Base& Base::operator=(Base const& rhs) {
    if (this != &rhs) {
    }
    return *this;
}

Base::~Base() {}