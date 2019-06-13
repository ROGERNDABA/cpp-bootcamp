/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:20:58 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/13 16:47:38 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"

Base *generate(void) {
    Base *bs;
    int randInt = rand() % 3;

    switch (randInt) {
        case 0:
            bs = new A();
            break;
        case 1:
            bs = new B();
            break;
        case 2:
            bs = new C();
            break;
    }
    return bs;
}

void identify_from_pointer(Base *p) {
    A *toA = dynamic_cast<A *>(p);
    if (toA) {
        std::cout << "From pointer p class is A" << std::endl;
    }

    B *toB = dynamic_cast<B *>(p);
    if (toB) {
        std::cout << "From pointer p class is B" << std::endl;
    }
    C *toC = dynamic_cast<C *>(p);
    if (toC) {
        std::cout << "From pointer p class is C" << std::endl;
    }
}

void identify_from_reference(Base &p) {
    try {
        A &toA = dynamic_cast<A &>(p);
        std::cout << "From reference p class A" << std::endl;
        static_cast<void>(toA);

    } catch (const std::bad_cast &e) {
        std::cerr << "A -- " << e.what() << '\n';
    }
    try {
        B &toB = dynamic_cast<B &>(p);
        std::cout << "From reference p class B" << std::endl;
        static_cast<void>(toB);

    } catch (const std::bad_cast &e) {
        std::cerr << "B -- " << e.what() << '\n';
    }
    try {
        C &toC = dynamic_cast<C &>(p);
        std::cout << "From reference p class C" << std::endl;
        static_cast<void>(toC);

    } catch (const std::bad_cast &e) {
        std::cerr << "C -- " << e.what() << '\n';
    }
}

int main() {
    srand(time(NULL));
    Base *bs = generate();
    identify_from_pointer(bs);

    std::cout << std::endl;
    identify_from_reference(*bs);

    /* code */
    return 0;
}
