/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:25:55 by rmdaba            #+#    #+#             */
/*   Updated: 2019/06/05 11:27:35 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    std::string *theString = new std::string("HI THIS IS BRAIN");
    std::string *ptrString = theString;
    std::string newString = *ptrString;
    delete ptrString;
    std::cout << ptrString << std::endl;
    return 0;
}