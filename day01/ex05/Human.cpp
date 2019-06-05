/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:22:59 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/05 10:54:35 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {
    std::cout << "Human created" << std::endl;
}

Human::Human(int weight, int capacity) : brain(weight, capacity){};

Human::~Human() {
    std::cout << "Human destroyed" << std::endl;
}

std::string Human::identity() {
    return this->brain.identity();
}

const Brain &Human::getBrain() {
    return this->brain;
}
