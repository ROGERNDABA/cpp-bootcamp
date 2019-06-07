#include "Fixed.class.hpp"

void underline(int len) {
    std::cout << "\033[32m";
    for (int i = 0; i < len; i++) {
        std::cout << "\u2594";
    }
    std::cout << "\033[0m" << std::endl;
}

int main(void) {
    std::cout << "\nCREATE A" << std::endl;
    underline(8);
    Fixed a;
    std::cout << "\ta   : " << a << std::endl;
    std::cout << "\nINCREMENTS AND DECREMENTS" << std::endl;
    underline(25);
    std::cout << "\ta++ : " << a++ << std::endl;
    std::cout << "\ta-- : " << a-- << std::endl;
    std::cout << "\t++a : " << ++a << std::endl;
    std::cout << "\t--a : " << --a << std::endl;

    std::cout << "\nCREATE B --> b(Fixed(5.05f)*Fixed(2))" << std::endl;
    underline(37);
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << "\tb   : " << b << std::endl;

    std::cout << "\nLOGICAL OPERATORS" << std::endl;
    underline(17);

    std::cout << "\ta == b : " << (a == b) << std::endl;
    std::cout << "\ta < b  : " << (a < b) << std::endl;
    std::cout << "\ta > b  : " << (a > b) << std::endl;
    std::cout << "\ta <= b : " << (a <= b) << std::endl;
    std::cout << "\ta >= b : " << (a >= b) << std::endl;

    std::cout << "\nCREATE C" << std::endl;
    Fixed c(2.5f);
    underline(8);
    std::cout << "\tc   : " << c << std::endl;

    std::cout << "\nARITHMETIC" << std::endl;
    underline(10);
    std::cout << "\t(b + c) : " << b + c << std::endl;
    std::cout << "\t(b - c) : " << b - c << std::endl;
    std::cout << "\t(b * c) : " << b * c << std::endl;
    std::cout << "\t(b / c) : " << b / c << std::endl;
    std::cout << "\t(b / 0) : " << b / 0 << std::endl;

    std::cout << "\nMIN & MAX" << std::endl;
    underline(9);
    std::cout << "\tmin(a, b) : " << Fixed::min(a, b) << std::endl;
    std::cout << "\tmin(b, a) : " << Fixed::min(b, a) << std::endl;
    std::cout << "\tmax(a, b) : " << Fixed::max(a, b) << std::endl;
    std::cout << "\tmax(b, a) : " << Fixed::min(b, a) << std::endl;

    std::cout << std::endl;

    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    //std::cout << Fixed::max(a, b) << std::endl;
    return 0;
}