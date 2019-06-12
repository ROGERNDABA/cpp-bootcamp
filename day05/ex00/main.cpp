/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 09:29:43 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/12 12:47:04 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "Bureaucrat.hpp"

void underline(int len) {
    std::cout << "\033[32m";
    for (int i = 0; i < len; i++) {
        std::cout << "\u2594";
    }
    std::cout << "\033[0m" << std::endl;
}

int main(int ac, char* av[]) {
    if (ac > 2 && ac < 4) {
        std::string str = "\nBUREAUCRAT ";
        str.append(av[1]);
        str.append(" WITH GRADE ");
        str.append(av[2]);
        std::cout << str << std::endl;
        underline(str.length() - 1);
        try {
            Bureaucrat a(av[1], atoi(av[2]));
            std::cout << "\tBureaucrat a(\"" << av[1]
                      << "\", " << av[2] << ") : " << a << "\n";
            std::cout << "\ta.incrementGrade() : ";
            a.incrementGrade();
            std::cout << a << std::endl;
            std::cout << "\ta.decrementGrade() : ";
            a.decrementGrade();
            std::cout << a << std::endl;
            std::cout << "\ta.decrementGrade() : ";
            a.decrementGrade();
            std::cout << a << std::endl;
        } catch (Bureaucrat::GradeTooHighException& e) {
            std::cerr << e.what() << "\n";
        } catch (Bureaucrat::GradeTooLowException& e) {
            std::cerr << e.what() << "\n";
        }
    } else {
        std::cout << "Invalid input: specify only <name> and <grade>" << std::endl;
    }
    return 0;
}
