/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:32:53 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/06 11:57:01 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int ac, char const *av[]) {
    if (ac > 1) {
        for (int i = 1; i < ac; i++) {
            std::ifstream ifs(av[i]);
            if (ifs.fail()) {
                std::cout << "No such file or directory : " << av[i];
                ifs.close();
            }
            std::string buff;
            while (std::getline(ifs, buff)) {
                std::cout << buff;
            };
            ifs.close();
        }
    } else {
        std::string cmd;
        while (1) {
            std::getline(std::cin, cmd);
            std::cout << cmd << std::endl;
        }
    }

    return 0;
}
