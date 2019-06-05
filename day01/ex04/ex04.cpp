/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:25:55 by rmdaba            #+#    #+#             */
/*   Updated: 2019/06/05 12:05:01 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    std::string theString = "HI THIS IS BRAIN";
    std::string *ptrString = &theString;
    std::string &refString = theString;
    std::cout << ptrString << std::endl;
    delete ptrString;
    return 0;
}