/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 10:47:11 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/13 15:04:05 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <sstream>
#include <string>
#include "Scalar.hpp"

int main(int ac, char* av[]) {
    if (ac == 2) {
        Scalar scalar(av[1]);
        try {
            std::cout << "char: " << scalar.toChar() << std::endl;
        } catch (const Scalar::ImpossibleException& e) {
            std::cerr << e.what() << '\n';
        } catch (const Scalar::NonDisplayableException& e) {
            std::cerr << e.what() << '\n';
        }

        try {
            Scalar scalar(av[1]);
            std::cout << "int: " << scalar.toInt() << std::endl;
        } catch (const Scalar::ImpossibleException& e) {
            std::cerr << e.what() << '\n';
        }

        std::cout << std::fixed << std::setprecision(scalar.getPrecision());

        try {
            std::cout << "float: " << scalar.toFloat() << "f" << std::endl;
        } catch (const Scalar::ImpossibleException& e) {
            std::cerr << e.what() << '\n';
        }

        try {
            std::cout << "double: " << scalar.toDouble() << std::endl;
        } catch (const Scalar::ImpossibleException& e) {
            std::cerr << e.what() << '\n';
        }
    } else {
        std::cout << "\033[31mGive me some juice bro\033[0m" << std::endl;
    }
    return 0;
}
