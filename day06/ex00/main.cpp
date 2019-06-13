/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 10:47:11 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/13 13:27:56 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <sstream>
#include <string>
#include "Scalar.hpp"

int main(int ac, char *av[]) {
    if (ac == 2) {
        Scalar scalar(av[1]);
    }
    return 0;
}
