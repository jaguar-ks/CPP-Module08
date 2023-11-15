/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 01:52:08 by faksouss          #+#    #+#             */
/*   Updated: 2023/11/15 02:42:28 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


class NotFound : public std::exception {
    public:
        virtual const char *what() const throw(){
            return "Element not found";
        }
};

template<typename T>

typename std::vector<T>::iterator easyfind( std::vector<T> &vc, int toFind ){
    typename std::vector<T>::iterator it = std::find(vc.begin(), vc.end(), toFind);
    if (it == vc.end())
        throw NotFound();
    return it;
}

