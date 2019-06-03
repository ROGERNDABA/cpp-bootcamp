/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roger <rogerndaba@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:27:21 by roger             #+#    #+#             */
/*   Updated: 2019/06/03 14:41:06 by roger            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.cpp"

int main() {
    ZombieEvent *zi = new ZombieEvent();

    Zombie *v = zi->newZombie("sdsdsdsdsd");
    v.setZombieType(v, "ytytyttyty");
    return 0;
}
