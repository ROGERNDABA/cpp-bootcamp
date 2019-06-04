/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:27:54 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/04 14:27:56 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.cpp"

class ZombieEvent {
   private:
   public:
    ZombieEvent();
    void setZombieType(Zombie*, std::string);
    Zombie* newZombie(std::string);
    Zombie* newZombie(std::string, std::string);
    Zombie* randomChump();
    ~ZombieEvent();
};