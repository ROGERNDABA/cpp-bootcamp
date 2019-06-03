/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roger <rogerndaba@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:26:59 by roger             #+#    #+#             */
/*   Updated: 2019/06/03 14:27:00 by roger            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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