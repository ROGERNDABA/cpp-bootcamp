#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {}

ZombieEvent::~ZombieEvent() {}

Zombie *ZombieEvent::newZombie(std::string name) {
    Zombie *newZombie = new Zombie(name);
    newZombie->announce();
    return newZombie;
}