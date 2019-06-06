/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:26:18 by rmdaba            #+#    #+#             */
/*   Updated: 2019/06/06 10:34:53 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int ZombieHorde::zombieCount = 0;

int ZombieHorde::getZombieCount() {
    return this->zombieCount;
}

ZombieHorde::ZombieHorde(int numberOfZombies) {
    Zombie *z = new Zombie[numberOfZombies];
    this->zombies = z;
    for (int i = 0; i < numberOfZombies; i++) {
        std::string randomNames[10] = {"Kevin_Mitnick", "Kevin_Poulson", "Adrian_Lamo",
                                       "Stephen_Wozniak", "Loyd_Blankenship", "Michael_Calce", "Robert_Morris",
                                       "The_Masters_Of_Deception", "David_LSmith", "Sven_Jaschan"};
        this->zombieCount++;
        this->zombies[i].setName(randomNames[std::rand() % 10]);

        std::string randomTypes[10] = {"Fun", "Hippy", "Dirty", "Stressed", "Imortal", "Good", "Witty",
                                       "Arrogant", "Shy", "Sexy"};
        this->zombies[i].setType(randomTypes[std::rand() % 10]);
    }
    // this->announce();
}

ZombieHorde::~ZombieHorde() {
    delete[] zombies;
    std::cout << "ZombieHorde destroyed" << std::endl;
}

Zombie *ZombieHorde::getZombies() {
    return this->zombies;
}

void ZombieHorde::announce() {
    for (int i = 0; i < this->zombieCount; i++) {
        this->zombies[i].announce();
    }
}
