#include <string.h>
#include <iostream>

int main(int ac, char const **av) {
  if (ac > 1) {
    for (int x = 1; x < ac; x++) {
      for (int i = 0; i < (int)strlen(av[x]); i++) {
        std::cout << (char)toupper(av[x][i]);
      };
    };
    std::cout << std::endl;
  } else {
    std::cout << "* LOUD AND UNBARANLE FEEDBACK NOISE *" << std::endl;
  };
};
