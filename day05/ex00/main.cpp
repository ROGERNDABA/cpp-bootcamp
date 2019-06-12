/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 09:29:43 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/12 11:30:39 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void underline(int len) {
    std::cout << "\033[32m";
    for (int i = 0; i < len; i++) {
        std::cout << "\u2594";
    }
    std::cout << "\033[0m" << std::endl;
}

int main() {
    std::cout << "\nBUREAUCRAT WITH GRADE < 1" << std::endl;
    underline(25);
    // std::cout << "\tBureaucrat a(\"Roger\", 0) : ";
    // Bureaucrat a("Roger", 0);
    // std::cout << "\ta : " << a << std::endl;

    // std::cout << "\nBUREAUCRAT WITH GRADE > 150" << std::endl;
    // underline(27);
    // std::cout << "\tBureaucrat b(\"Roger\", 151) : ";
    // Bureaucrat b("Roger", 151);
    // std::cout << "\tb : " << b << std::endl;

    // std::cout << "\nBUREAUCRAT WITH GRADE 1<=>150" << std::endl;
    // underline(29);
    // std::cout << "\tBureaucrat c(\"Roger\", 2) : \n";
    // Bureaucrat c("Roger", 2);
    // std::cout << "\tc : " << c << std::endl;
    // Bureaucrat d("Roger", 149);
    // std::cout << "\tBureaucrat d(\"Roger\", 149) : \n";
    // std::cout << "\td : " << d << std::endl;

    // std::cout << "\nBUREAUCRAT INCREMENT AND DECREMENT" << std::endl;
    // underline(34);
    // std::cout << "\tc.incrementGrade() : \n";
    // c.incrementGrade();
    // std::cout << "\tc : " << c << std::endl;

    // std::cout << "\tc.incrementGrade() : ";
    // c.incrementGrade();
    // std::cout << "\tc : " << c << std::endl;

    // std::cout << "\n\td.decrementGrade() : \n";
    // d.decrementGrade();
    // std::cout << "\td : " << d << std::endl;

    // std::cout << "\td.decrementGrade() : ";
    // d.decrementGrade();
    // std::cout << "\td : " << d << std::endl;
    // return 0;
}
