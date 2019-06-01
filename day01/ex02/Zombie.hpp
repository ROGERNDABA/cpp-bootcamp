#include <iostream>

class Zombie {
   private:
    std::string name;
    std::string type;

   public:
    Zombie(std::string name);
    Zombie(std::string name, std::string type);
    void announce();
    ~Zombie();
};
