#include "Zombie.cpp"

class ZombieEvent {
   private:
   public:
    ZombieEvent();
    void setZombieType();
    Zombie* newZombie(std::string name);
    Zombie* randomChump();
    ~ZombieEvent();
};