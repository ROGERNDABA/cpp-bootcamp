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
    this->getType() = type;
}

// void Weapon::attack(std::string name) const {
//     std::cout << name << " attacks with his ";
//     std::cout << this->getType() << std::endl;
// }