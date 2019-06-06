/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:26:01 by rmdaba            #+#    #+#             */
/*   Updated: 2019/06/06 10:32:47 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.cpp"

int main() {
    ZombieHorde *zh = new ZombieHorde(5);
    zh->announce();
    Zombie *zombies = zh->getZombies();

    for (int i = 0; i < zh->getZombieCount(); i++) {
        zombies[i].setType("TYPE 2");
    }

    zh->announce();

    delete zh;
    return 0;
}
