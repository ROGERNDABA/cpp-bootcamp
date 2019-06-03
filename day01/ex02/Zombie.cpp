#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->name = name;
    this->announce();
}

Zombie::Zombie(std::string name, std::string type) {
    this->name = name;
    this->type = type;
    this->announce();
}

Zombie::~Zombie() {}

void Zombie::setType(std::string type) {
    this->type = type;
}

std::string Zombie::getType() {
    return this->type;
}

void Zombie::announce() {
    std::cout << "<" << this->name << " ";
    std::cout << this->type << "> Braiiiiiiinnnssss..." << std::endl;
}