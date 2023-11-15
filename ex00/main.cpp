/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 02:25:51 by faksouss          #+#    #+#             */
/*   Updated: 2023/11/15 06:02:26 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <cstdlib>
#include <exception>
#include <sys/_types/_size_t.h>
#include <vector>

int main(){
    {
        std::vector<int> Vc;
        srand(time(NULL));
        for (int i = 0; i < 50; i++)
            Vc.push_back(rand() % 100);
        for (size_t i = 0; i < Vc.size(); i++)
            std::cout << Vc.at(i) << std::endl;
        try {
            std::vector<int>::iterator it;
            it = easyfind<int>(Vc, rand() % 100);
            std::cout << "element fond [" << *it << "]" << std::endl;
        }
        catch (std::exception &e){
            std::cerr << e.what() << std::endl;
        }
    }
}
