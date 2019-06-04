/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:27:21 by roger             #+#    #+#             */
/*   Updated: 2019/06/04 14:27:42 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.cpp"

int main() {
    ZombieEvent zombieEvent;

    // new zombie without a type, default given as 'Lastman'
    Zombie *zombie1 = zombieEvent.newZombie("Pumba");
    zombieEvent.setZombieType(zombie1, "Fun");
    zombie1->announce();
    zombieEvent.setZombieType(zombie1, "Scary");
    zombie1->announce();
    zombieEvent.setZombieType(zombie1, "Stupid");
    zombie1->announce();
    // New Zombie with type
    Zombie *zombie2 = zombieEvent.newZombie("Scrapy", "Sassy");
    // Type can be changed even with default type from instantiation
    zombieEvent.setZombieType(zombie2, "Whoopi");
    zombie2->announce();

    // randow Zombie
    Zombie *randomZomie1 = zombieEvent.randomChump();

    // set random zombies' type
    zombieEvent.setZombieType(randomZomie1, "Randy");
    randomZomie1->announce();

    // Zombies on the stack have to be manually done away with
    delete zombie2;
    delete zombie1;
    delete randomZomie1;
    return 0;
}
