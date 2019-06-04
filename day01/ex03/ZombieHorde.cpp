#include "ZombieHorde.hpp"

int ZombieHorde::zombieCount = 0;

int ZombieHorde::getZombieCount() {
    return this->zombieCount;
}

ZombieHorde::ZombieHorde(int numberOfZombies) {
    Zombie z[numberOfZombies];
    this->zombies = z;
    for (int i = 0; i < numberOfZombies; i++) {
        std::string randomNames[10] = {"Kevin_Mitnick", "Kevin_Poulson", "Adrian_Lamo",
                                       "Stephen_Wozniak", "Loyd_Blankenship", "Michael_Calce", "Robert_Morris",
                                       "The_Masters_Of_Deception", "David_LSmith", "Sven_Jaschan"};
        this->zombieCount++;
        this->zombies[i].setName(randomNames[std::rand() % 10]);
    }
    this->announce();
}

ZombieHorde::~ZombieHorde() {
    std::cout << "ZombieHorde destroyed" << std::endl;
}

void ZombieHorde::announce() {
    for (int i = 0; i < this->zombieCount; i++) {
        this->zombies[i].announce();
    }
}
