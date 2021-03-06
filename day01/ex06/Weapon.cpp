#include "Weapon.hpp"

Weapon::Weapon() {
    std::cout << "Weapon created" << std::endl;
}

Weapon::Weapon(std::string type) : type(type) {
    std::cout << "Weapon created" << std::endl;
}

Weapon::~Weapon() {}

std::string& Weapon::getType() {
    return this->type;
}

void Weapon::setType(std::string type) {
    this->type = type;
}