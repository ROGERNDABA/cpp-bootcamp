#include <iostream>
#include "Array.hpp"

int main() {
    Array<int> g;
    g[7] = 5;
    std::cout << "---> '" << g[7] << "'" << std::endl;
    return 0;
}
