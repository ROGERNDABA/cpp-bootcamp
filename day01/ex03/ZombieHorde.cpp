#include "ZombieHorde.hpp"

int ZombieHorde::zombieCount = 0;

int ZombieHorde::getZombieCount() {
    return this->zombieCount;
}

// Zombie *ZombieHorde::getZombies() {
//     return this->zombies;
// }

ZombieHorde::ZombieHorde(int numberOfZombies) {
    Zombie z[numberOfZombies];
    this->zombies = z;
    this->zombies = new Zombie[numberOfZombies];
    for (int i = 0; i < numberOfZombies; i++) {
        this->zombieCount++;
        this->zombies[i].setName("sfdsds");
        this->zombies[i].setType("sfdsds");
        std::cout << "Zombie " << zombieCount << std::endl;
        this->zombies[i].announce();
    }
}

ZombieHorde::~ZombieHorde() {
    std::cout << "ZombieHorde destroyed" << std::endl;
}
