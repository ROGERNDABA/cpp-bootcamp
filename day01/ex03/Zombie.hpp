#include <iostream>

class Zombie {
   private:
    std::string name;
    std::string type;

   public:
    Zombie();
    Zombie(std::string);
    Zombie(std::string, std::string);
    void setType(std::string);
    std::string getType();
    void setName(std::string);
    std::string getName();
    void announce();
    ~Zombie();
};
