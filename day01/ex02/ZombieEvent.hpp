#include "Zombie.cpp"

class ZombieEvent {
   private:
   public:
    ZombieEvent();
    void setZombieType(Zombie*, std::string);
    Zombie* newZombie(std::string);
    Zombie* newZombie(std::string, std::string);
    Zombie* randomChump();
    ~ZombieEvent();
};