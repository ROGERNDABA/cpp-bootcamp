/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:22:01 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/05 10:54:29 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.cpp"

class Human {
   private:
    const Brain brain;

   public:
    Human();
    Human(int weight, int capacity);
    ~Human();
    std::string identity();
    const Brain &getBrain();
};

#endif  // !HUMAN_HPP