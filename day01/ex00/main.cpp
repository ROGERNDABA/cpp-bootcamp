#include "Pony.cpp"

int main() {
    Pony ponyStack = ponyOnTheStack();
    ponyStack.printPony();

    Pony *ponyHeap = ponyOnTheHeap();
    ponyHeap->printPony();
    //Have to explicitly free memory with delete
    delete ponyHeap;
    return 0;
}
