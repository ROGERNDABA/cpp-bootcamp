/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:39:39 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/05 10:19:32 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <sstream>

class Brain {
   private:
    int weight;
    int capacity;
    // Brain *brainAddress;

   public:
    Brain();
    Brain(int weight, int capacity);
    ~Brain();
    std::string identity() const;
    void setWeight(int);
    void setCapacity(int);
    int getCapacity() const;
    int getWeight() const;
};

#endif  // !BRAIN_HPP