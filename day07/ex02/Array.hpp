/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 10:16:41 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/14 13:18:38 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cmath>
#include <fstream>
#include <iostream>

template <typename T>

class Array {
   private:
    T *_array;
    int _arrSize;

   public:
    class GradeTooHighException : std::exception {
       public:
        GradeTooHighException(void){};
        GradeTooHighException(GradeTooHighException const &copy) {
            *this = copy;
            return;
        };
        GradeTooHighException &operator=(GradeTooHighException const &rhs) {
            if (this != &rhs) {
            }
            return *this;
        };
        virtual const char *what() const throw() {
            return ("\033[31mcan't access that value\033[0m");
        };
    };

    Array<T>() : _arrSize(0) {
        T *a = new T[0];
        this->_array = a;
    };

    Array<T>(unsigned int n) : _arrSize(n) {
        T *a = new T[n];
        this->_array = a;
    };

    Array<T>(Array<T> const &copy) : _array(copy._array) {
        *this = copy;
        return;
    };

    Array<T> &operator=(Array<T> const &rhs) {
        if (this != &rhs) {
            this->_array = rhs.getArray();
        }
        return *this;
    };

    ~Array<T>() {
        delete[] this->_array;
        this->_array = NULL;
    };

    T &getArray() {
        return this->_array;
    }

    T &operator[](int n) {
        try {
            if ((n >= this->_arrSize && n != 0) || n < 0)
                throw Array::GradeTooHighException();
        } catch (Array::GradeTooHighException &e) {
            std::cerr << e.what();
        }
        return this->_array[n];
    }

    int length() {
        return this->_arrSize;
    }
};

#endif