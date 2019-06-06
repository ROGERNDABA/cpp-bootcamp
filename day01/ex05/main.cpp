/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:23:20 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/06 10:54:59 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.cpp"

int main() {
    std::cout << "HUMAN WITH DEFAULT CONSTRUCTOR \n\n";
    Human human1;
    std::cout << human1.identity() << std::endl;
    std::cout << "human1.identity()" << std::endl;
    std::cout << human1.getBrain().identity() << std::endl;
    std::cout << "h.identity().identity()" << std::endl;

    // std::cout << h.getBrain().setWeight(10) << std::endl;
    std::cout << "Brain weight --> " << human1.getBrain().getWeight() << "g" << std::endl;
    std::cout << "Brain capacity --> " << human1.getBrain().getCapacity() << "%" << std::endl;

    std::cout << "\n\nHUMAN WITH PARAMETERIZED CONSTRUCTOR \n\n";

    Human human2(40, 9);
    std::cout << human2.identity() << std::endl;
    std::cout << "human2.identity()" << std::endl;
    std::cout << human2.getBrain().identity() << std::endl;
    std::cout << "human2.identity().identity()" << std::endl;

    // std::cout << h.getBrain().setWeight(10) << std::endl;
    std::cout << "Brain weight --> " << human2.getBrain().getWeight() << "g" << std::endl;
    std::cout << "Brain capacity --> " << human2.getBrain().getCapacity() << "%" << std::endl;

    return 0;
}
