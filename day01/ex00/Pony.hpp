/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:26:59 by roger             #+#    #+#             */
/*   Updated: 2019/06/06 10:40:10 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
#define PONY_H
#include <iostream>

class Pony {
   private:
    std::string ponyWhere;
    std::string color;
    std::string colorHex;

   public:
    Pony(std::string);
    Pony(void);
    ~Pony();
    void printPony();
    void setColor(std::string);
    void setColorHex(std::string);
    std::string getColor(void);
    std::string getColorHex(void);
    // std::string getPonyWhere();
    // void setPonyWhere(std::string);
};

#endif