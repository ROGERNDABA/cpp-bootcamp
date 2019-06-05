/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:25:55 by rmdaba            #+#    #+#             */
/*   Updated: 2019/06/04 14:39:52 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    std::string theString = "HI THIS IS BRAIN";
    std::string *ptrString = new std::string(theString);
    std::string newString = *ptrString;
    delete ptrString;
    std::cout << newString << std::endl;
    return 0;
}