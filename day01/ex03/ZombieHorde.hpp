#include "Zombie.cpp"

class ZombieHorde : public Zombie {
   private:
    Zombie *zombies;

    static int zombieCount;

   public:
    ZombieHorde(int);
    int getZombieCount();
    Zombie *getZombies();
    Zombie randomChump();
    void announce();
    ~ZombieHorde();
};
