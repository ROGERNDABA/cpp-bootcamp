/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Roger Ndaba <rogerndaba@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:52:20 by Roger Ndaba       #+#    #+#             */
/*   Updated: 2019/06/07 17:20:58 by Roger Ndaba      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Eval.hpp"
int parse_sum(char **expr);

int parse_number(char **expr) {
    int nbr;

    while (**expr == ' ')
        (*expr)++;
    if (**expr == '(') {
        (*expr)++;
        nbr = parse_sum(expr);
        if (**expr == ')')
            (*expr)++;
        return (nbr);
    }
    return (atoi(*expr));
}

int parse_factors(char **expr) {
    int nbr;
    int nbr2;
    char op;

    nbr = parse_number(expr);
    while (**expr) {
        while (**expr == ' ')
            (*expr)++;
        op = **expr;
        if (op != '/' && op != '*' && op != '%')
            return (nbr);
        (*expr)++;
        nbr2 = parse_number(expr);
        if (op == '/')
            nbr /= nbr2;
        else if (op == '*')
            nbr *= nbr2;
        else
            nbr %= nbr2;
    }
    return (nbr);
}

int parse_sum(char **expr) {
    int nbr;
    int nbr2;
    char op;

    nbr = parse_factors(expr);
    while (**expr) {
        while (**expr == ' ')
            (*expr)++;
        op = **expr;
        if (op != '+' && op != '-')
            return (nbr);
        (*expr)++;
        nbr2 = parse_factors(expr);
        if (op == '+')
            nbr += nbr2;
        else
            nbr -= nbr2;
    }
    return (nbr);
}

int eval_expr(char *expr) {
    return (parse_sum(&expr));
}
int main(int ac, char *av[]) {
    if (ac > 1) {
        std::cout << &eval_expr(av[1]) << std::endl;
        std::cout << "Yeah" << std::endl;
    }
    return 0;
}
