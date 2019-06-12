/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 09:29:43 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/12 13:01:58 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void underline(int len) {
    std::cout << "\033[32m";
    for (int i = 0; i < len; i++) {
        std::cout << "\u2594";
    }
    std::cout << "\033[0m" << std::endl;
}

int main() {
    try {
        Form f;
    } catch (Bureaucrat::GradeTooHighException& e) {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
