/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:25:55 by rmdaba            #+#    #+#             */
/*   Updated: 2019/06/06 10:51:45 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    std::string theString = "HI THIS IS BRAIN";
    std::string *ptrString = &theString;
    std::string &refString = theString;
    std::cout << "String : " << theString << std::endl;
    std::cout << "Poiner String : " << *ptrString << std::endl;
    std::cout << "Ref String : " << refString << std::endl;
    return 0;
}