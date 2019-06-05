/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmil.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 19:10:07 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/05 20:18:28 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int ac, char *av[]) {
    if (ac == 4) {
        std::string filename = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];

        std::ifstream ifs(filename);

        if (ifs.fail()) {
            std::cout << "Failed to open file" << std::endl;
            exit(1);
        }
        std::string outputFile = filename + ".replace";
        std::ofstream ofs(outputFile);

        std::string buff;
        do {
            while (buff.find(s1) != std::string::npos) {
                buff.replace(buff.find(s1), s1.length(), s2);
            }
            ofs << buff;
            ofs << std::endl;
        } while (std::getline(ifs, buff));

        if (buff == "") {
            ofs << std::endl;
        }
        ifs.close();
        ofs.close();

        // std::cout
        //     << "filename ->" << filename << std::endl;
        // std::cout << "s1 ->" << s1 << std::endl;
        // std::cout << "s2 ->" << s2 << std::endl;

    } else {
        std::cout << "no" << std::endl;
    }
    return 0;
}
