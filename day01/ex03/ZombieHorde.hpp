/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:27:34 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/06 10:35:38 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.cpp"

class ZombieHorde : public Zombie {
   private:
    Zombie *zombies;

    static int zombieCount;

   public:
    ZombieHorde(int);
    int getZombieCount();
    Zombie *getZombies();
    Zombie randomChump();
    void announce();
    ~ZombieHorde();
};
