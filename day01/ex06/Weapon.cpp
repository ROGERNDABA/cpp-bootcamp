#include "Weapon.hpp"

Weapon::Weapon() {
    std::cout << "Weapon created" << std::endl;
}

Weapon::Weapon(std::string type) {
    std::cout << "Weapon created" << std::endl;
    setType(type);
}

Weapon::~Weapon() {}

std::string Weapon::getType() const {
    return this->type;
}

void Weapon::setType(std::string type) {
    this->type = type;
}