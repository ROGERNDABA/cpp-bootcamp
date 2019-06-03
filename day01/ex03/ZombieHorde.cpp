#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int numberOfZombies) {
    this->Zombies = new Zombie[numberOfZombies];
    for (int i = 0; i < numberOfZombies; i++) {
        std::cout << "Zombie " << i << std::endl;
        this->Zombies[i].announce();
    }
}

ZombieHorde::~ZombieHorde() {
}
