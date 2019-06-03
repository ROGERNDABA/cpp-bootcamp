#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
    std::cout << "sdsdsd" << std::endl;
}

ZombieEvent::~ZombieEvent() {}

Zombie *ZombieEvent::newZombie(std::string name) {
    Zombie *newZombie = new Zombie(name);
    return newZombie;
}

void ZombieEvent::setZombieType(Zombie *zombie, std::string type) {
    zombie->setType(type);
}