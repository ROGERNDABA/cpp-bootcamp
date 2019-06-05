/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:40:42 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/05 11:24:06 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain created" << std::endl;
    this->weight = 0;
    this->capacity = 0;
}

Brain::Brain(int weight, int capacity) {
    std::cout << "Brain created" << std::endl;
    this->setWeight(weight);
    this->setCapacity(capacity);
}

Brain::~Brain() {
    std::cout << "Brain destroyed" << std::endl;
}

std::string Brain::identity() const {
    std::ostringstream oss;
    oss << (const void *)this;
    std::string s(oss.str());
    return s;
}

void Brain::setCapacity(int capacity) {
    this->capacity = capacity;
}

void Brain::setWeight(int weight) {
    this->weight = weight;
}

int Brain::getCapacity() const {
    return this->capacity;
}

int Brain::getWeight() const {
    return this->weight;
}