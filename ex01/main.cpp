/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 05:06:10 by faksouss          #+#    #+#             */
/*   Updated: 2023/11/16 08:34:24 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>

int main (){
    {
        try {
        Span sp(20);
        std::list<int> lst;
        srand(time(NULL));
        for (int i = 0; i < 10; i++)
            lst.push_back((rand()%1000));
        sp.addNumber(lst);
        // for (int i = 0; i < 10; i++)
        //     sp.addNumber((rand() % 100) + 1);
        std::cout << "\t*|LIST CONTENT|*" << std::endl;
        lst = sp.getLst();
        for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
            std::cout << *it << std::endl;
        lst.sort();
        std::cout << "\t*|SORTED LIST|*" << std::endl;
        for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
            std::cout << *it << std::endl;
        std::cout << "The shortest span is: [" << sp.shortestSpan() << ']' << std::endl;
        std::cout << "The longest span is: [" << sp.longestSpan() << ']' << std::endl;
        sp.addNumber(130);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        try {
            Span sp = Span(5);
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    return 0;
}
