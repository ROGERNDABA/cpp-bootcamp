/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:26:10 by rmdaba            #+#    #+#             */
/*   Updated: 2019/06/06 10:12:51 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->name = name;
    // this->type = "Lastman";
    this->announce();
}

Zombie::Zombie(std::string name, std::string type) {
    this->name = name;
    this->type = type;
    this->announce();
}

Zombie::Zombie() {}

Zombie::~Zombie() {
    std::cout << "\033[31m" << this->name << " demolished\033[0m" << std::endl;
}

void Zombie::setType(std::string type) {
    this->type = type;
}

std::string Zombie::getType() {
    return this->type;
}

void Zombie::setName(std::string name) {
    this->name = name;
}

std::string Zombie::getName() {
    return this->name;
}

void Zombie::announce() {
    std::cout << "<\033[32m" << this->name << "\033[36m (";
    std::cout << this->type << ")\033[0m> Braiiiiiiinnnssss..." << std::endl;
}