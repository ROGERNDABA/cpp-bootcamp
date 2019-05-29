#include <iostream>

class Pony {
   private:
    std::string ponyWhere;

   public:
    Pony(std::string ponyWhere);
    Pony();
    ~Pony();
    void printPony();
};