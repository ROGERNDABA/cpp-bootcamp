/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:27:47 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/04 14:27:49 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {
   private:
    std::string name;
    std::string type;

   public:
    Zombie(std::string);
    Zombie(std::string, std::string);
    void setType(std::string);
    std::string getType();
    void announce();
    ~Zombie();
};
