#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
    std::cout << "<--- ZombieEvent() --->\n";
}

ZombieEvent::~ZombieEvent() {
    std::cout << "\033[31m~ZombieEvent destroyed\033[0m"
              << std::endl;
}

Zombie *ZombieEvent::newZombie(std::string name) {
    Zombie *newZombie = new Zombie(name);
    return newZombie;
}

Zombie *ZombieEvent::newZombie(std::string name, std::string type) {
    Zombie *newZombie = new Zombie(name, type);
    return newZombie;
}

void ZombieEvent::setZombieType(Zombie *zombie, std::string type) {
    std::cout << "<--- setZombieType() --->\n";
    zombie->setType(type);
}

Zombie *ZombieEvent::randomChump() {
    srand(time(0));
    std::string randomNames[10] = {"ZAZ", "Vikingz", "Drakest", "dfddfd", "dfdfdf", "dfdfdfdf", "dfdfdfdfdf", "dfdfdfdfdf000", "dfdfdfdfdf111", "dfdfdfdfdf0000000000"};
    Zombie *randomZombie = new Zombie(randomNames[rand() % 10]);
    return randomZombie;
}