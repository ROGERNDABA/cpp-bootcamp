#include "Pony.cpp"

int main() {
    Pony ponyStack = ponyOnTheStack();
    //Use of a dot to access member of the Pony class if created on the stack
    ponyStack.printPony();

    Pony *ponyHeap = ponyOnTheHeap();
    //Use of an arrow to access member of the Pony class if created on the heap
    ponyHeap->printPony();
    //Have to explicitly free memory with delete
    delete ponyHeap;
    return 0;
}
