#include "Pony.hpp"

Pony::Pony() {
    std::cout << "Pony created" << std::endl;
}

Pony::~Pony() {
    std::cout << "Pony destroyed" << std::endl;
}

void ponyOnTheHeap(Pony pony){};
void ponyOnTheStack(Pony pony){};