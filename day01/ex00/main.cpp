#include "Pony.cpp"

int main() {
    Pony p;
    Pony *p1 = new Pony();

    delete p1;

    ponyOnTheHeap(p);
    return 0;
}
