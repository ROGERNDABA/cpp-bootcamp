/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:27:44 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/06 10:20:34 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->name = name;
    std::string randomTypes[10] = {"Fun", "Hippy", "Dirty", "Stressed", "Imortal", "Good", "Witty",
                                   "Arrogant", "Shy", "Sexy"};
    this->type = randomTypes[std::rand() % 10];
    this->announce();
}

Zombie::Zombie(std::string name, std::string type) {
    this->name = name;
    this->type = type;
    this->announce();
}

Zombie::~Zombie() {
    std::cout << "\033[31mZombie demolished\033[0m" << std::endl;
}

void Zombie::setType(std::string type) {
    this->type = type;
}

std::string Zombie::getType() {
    return this->type;
}

void Zombie::announce() {
    std::cout << "<\033[32m" << this->name << "\033[36m (";
    std::cout << this->type << ")\033[0m> Braiiiiiiinnnssss..." << std::endl;
}