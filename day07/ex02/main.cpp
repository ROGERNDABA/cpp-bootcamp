#include <iostream>
#include "Array.hpp"

class A {
   public:
    A(void) : _n(42) { return; }
    int get(void) const { return this->_n; }
    void set(int n) { this->_n = n; }

   private:
    int _n;
};

std::ostream& operator<<(std::ostream& o, A const& rhs) {
    o << rhs.get();
    return o;
}

void underline(std::string str) {
    std::cout << str << std::endl;
    std::cout << "\033[32m";
    for (int i = 0; i < (int)str.length(); i++) {
        std::cout << "\u2594";
    }
    std::cout << "\033[0m" << std::endl;
}

int main() {
    underline("\nEMPTY ARRAY");
    Array<int> g;
    std::cout << "\tArray<int> g;" << std::endl;
    std::cout << "\tg.length : " << g.length() << std::endl;

    underline("\nARRAYOF INTS SIZE 3");
    Array<int> i(3);
    std::cout << "\tArray<int> i(3);" << std::endl;
    std::cout << "\ti.length : " << i.length() << std::endl;

    underline("\nARRAYOF STRINGS SIZE 3");
    Array<std::string> s(3);
    std::cout << "\tArray<std::string> s(3);" << std::endl;
    std::cout << "\ts.length : " << s.length() << std::endl;

    underline("\nARRAYOF CLASSES SIZE 3");
    Array<A> c(3);
    std::cout << "\tArray<A> c(3);" << std::endl;
    std::cout << "\tc.length : " << c.length() << std::endl;

    underline("\nACCESSING ARRAY VALUES");
    std::cout << "\tg[1] : " << g[1] << std::endl;
    std::cout << "\ti[1] : " << i[1] << std::endl;
    std::cout << "\ts[1] : " << s[1] << std::endl;
    std::cout << "\tc[1] : " << c[1] << std::endl;

    underline("\nSETTING ARRAY VALUES");
    std::cout << "\tg[1] = 5;" << std::endl;
    g[1] = 5;
    std::cout << "\n\ti[1] = 99;" << std::endl;
    i[1] = 99;
    std::cout << "\ts[1] = \"Roger\";" << std::endl;
    s[1] = "Roger";
    std::cout << "\tc[1].set(99);" << std::endl;
    c[1].set(99);

    underline("\nREACCESSING ARRAY VALUES");
    std::cout << "\tg[1] : " << g[1] << std::endl;
    std::cout << "\ti[1] : " << i[1] << std::endl;
    std::cout << "\ts[1] : " << s[1] << std::endl;
    std::cout << "\tc[1] : " << c[1] << std::endl;
}
