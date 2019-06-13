/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 09:29:43 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/12 17:10:39 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

void underline(int len) {
    std::cout << "\033[32m";
    for (int i = 0; i < len; i++) {
        std::cout << "\u2594";
    }
    std::cout << "\033[0m" << std::endl;
}

int main() {
    try {
        Form f("jjj", "Holy", 42, 42);
        std::cout << f << std::endl;
        try {
            Bureaucrat b("Roger", 2);
            f.beSigned(b);

            ShrubberyCreationForm scf;
            scf.execute(b);
        } catch (Bureaucrat::GradeTooLowException& e) {
            std::cerr << e.what() << '\n';
        } catch (Bureaucrat::GradeTooHighException& e) {
            std::cerr << e.what() << '\n';
        }
        std::cout << f << std::endl;

    } catch (Form::GradeTooLowException& e) {
        std::cerr << e.what() << '\n';
    } catch (Form::GradeTooHighException& e) {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
