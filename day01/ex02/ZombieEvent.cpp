/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:27:51 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/06 10:13:13 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
    std::cout << "<--- ZombieEvent() --->\n";
}

ZombieEvent::~ZombieEvent() {
    std::cout << "\033[31m~ZombieEvent destroyed\033[0m"
              << std::endl;
}

Zombie *ZombieEvent::newZombie(std::string name) {
    Zombie *newZombie = new Zombie(name);
    return newZombie;
}

Zombie *ZombieEvent::newZombie(std::string name, std::string type) {
    Zombie *newZombie = new Zombie(name, type);
    return newZombie;
}

void ZombieEvent::setZombieType(Zombie *zombie, std::string type) {
    zombie->setType(type);
}

Zombie *ZombieEvent::randomChump() {
    std::string randomNames[10] = {"Kevin_Mitnick", "Kevin_Poulson", "Adrian_Lamo",
                                   "Stephen_Wozniak", "Loyd_Blankenship", "Michael_Calce", "Robert_Morris",
                                   "The_Masters_Of_Deception", "David_LSmith", "Sven_Jaschan"};
    Zombie *randomZombie = new Zombie(randomNames[std::rand() % 10]);
    return randomZombie;
}