#include "Pony.hpp"

Pony::Pony() {
    std::cout << "Pony created" << std::endl;
}

Pony::~Pony() {
    std::cout << "Pony destroyed" << std::endl;
}

void ponyOnTheStack(Pony pony){};
void ponyOnTheHeap(Pony *pony){};