/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:26:14 by rmdaba            #+#    #+#             */
/*   Updated: 2019/06/04 14:27:28 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
