/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 09:24:51 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/14 12:38:53 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void iter(T *arr, int len, void (*f)(T const &)) {
    for (int i = 0; i < len; i++) {
        f(arr[i]);
    }
};

void Print(std::string const &f) {
    std::cout << f << std::endl;
}

int main() {
    std::string s[] = {"ggggg", "dffff"};
    iter(s, 2, Print);
    return 0;
}
