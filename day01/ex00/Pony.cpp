/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roger <rogerndaba@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:26:55 by roger             #+#    #+#             */
/*   Updated: 2019/06/03 14:26:56 by roger            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony() {
    std::cout << "Default Pony created" << std::endl;
}

Pony::Pony(std::string ponyWhere) {
    this->ponyWhere = ponyWhere;
    std::cout << std::endl
              << "Pony created on the " << this->ponyWhere << std::endl;
}

void Pony::printPony() {
    std::cout << "                       ~~%%%%%%%%_,_," << std::endl;
    std::cout << "                    ~~%%%%%%%%%-'/./" << std::endl;
    std::cout << "                  ~~%%%%%%%-'   /  `." << std::endl;
    std::cout << "               ~~%%%%%%%%'  .     ,__;" << std::endl;
    std::cout << "             ~~%%%%%%%%'   :       \\O\\" << std::endl;
    std::cout << "           ~~%%%%%%%%'    :          `." << std::endl;
    std::cout << "        ~~%%%%%%%%'       `. _,        '" << std::endl;
    std::cout << "     ~~%%%%%%%%'          .'`-._        `." << std::endl;
    std::cout << "  ~~%%%%%%%%%'           :     `-.     (,;" << std::endl;
    std::cout << " ~~%%%%%%%%'             :         `._\\_.' ~ I'm on the " << this->ponyWhere << std::endl;
    std::cout << " ~~%%%%%%%%'              ;" << std::endl;
}

Pony::~Pony() {
    std::cout << "Pony destroyed" << std::endl;
}

Pony ponyOnTheStack() {
    Pony pony("STACK");
    return pony;
};
Pony *ponyOnTheHeap() {
    Pony *pony = new Pony("HEAP");
    return pony;
};
