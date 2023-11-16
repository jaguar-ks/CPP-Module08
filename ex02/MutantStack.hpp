/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 02:18:21 by faksouss          #+#    #+#             */
/*   Updated: 2023/11/16 04:59:45 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <deque>
#include<stack>
#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<iterator>

template<class T, typename CNTNR = std::deque<T> >

class MutantStack : public std::stack<T, CNTNR> {
    public:
        MutantStack( void );
        MutantStack( MutantStack const &obj );
        ~MutantStack( void );
        MutantStack &operator=( MutantStack const &obj );
        typedef typename CNTNR::iterator iterator;
        typedef typename CNTNR::const_iterator const_iterator;
        typedef typename CNTNR::reverse_iterator reverse_iterator;
        typedef typename CNTNR::const_reverse_iterator const_reverse_iterator;
        iterator begin();
        iterator end();
        const_iterator cbegin();
        const_iterator cend();
        reverse_iterator rbegin();
        reverse_iterator rend();
        const_reverse_iterator crbegin();
        const_reverse_iterator crend();
};

#include "MutantStack.tpp"
