/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:26:55 by roger             #+#    #+#             */
/*   Updated: 2019/06/06 10:48:04 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <time.h>
Pony::Pony() {
    std::cout << "Default Pony created" << std::endl;
}

Pony::Pony(std::string ponyWhere) {
    this->ponyWhere = ponyWhere;
    std::cout << std::endl
              << "Pony created on the " << this->ponyWhere << std::endl;
}

void Pony::printPony() {
    std::cout << this->getColorHex() << "                       ~~%%%%%%%%_,_," << std::endl;
    std::cout << "                    ~~%%%%%%%%%-'/./" << std::endl;
    std::cout << "                  ~~%%%%%%%-'   /  `." << std::endl;
    std::cout << "               ~~%%%%%%%%'  .     ,__;" << std::endl;
    std::cout << "             ~~%%%%%%%%'   :       \\O\\" << std::endl;
    std::cout << "           ~~%%%%%%%%'    :          `." << std::endl;
    std::cout << "        ~~%%%%%%%%'       `. _,        '" << std::endl;
    std::cout << "     ~~%%%%%%%%'          .'`-._        `." << std::endl;
    std::cout << "  ~~%%%%%%%%%'           :     `-.     (,;" << std::endl;
    std::cout << " ~~%%%%%%%%'             :         `._\\_.' ~ I'm on the " << this->ponyWhere << std::endl;
    std::cout << "                                             and I'm " << this->getColor()
              << " in color.\033[0m" << std::endl;
    std::cout << " ~~%%%%%%%%'              ;" << std::endl;
}

Pony::~Pony() {
    std::cout << "Pony destroyed" << std::endl;
}

void Pony::setColor(std::string color) {
    this->color = color;
};
void Pony::setColorHex(std::string colorHex) {
    this->colorHex = colorHex;
};
std::string Pony::getColor(void) {
    return this->color;
};
std::string Pony::getColorHex(void) {
    return this->colorHex;
};

Pony ponyOnTheStack() {
    clock_t t = 0;
    Pony pony("STACK");
    pony.setColor("RED");
    pony.setColorHex("\033[31m");
    t = clock() - t;
    std::cout << "Access time ---> " << t << std::endl;
    return pony;
};

Pony *ponyOnTheHeap() {
    clock_t t = 0;
    Pony *pony = new Pony("HEAP");
    pony->setColor("Green");
    pony->setColorHex("\033[32m");
    t = clock() - t;
    std::cout << "Access time ---> " << t << std::endl;
    return pony;
};
