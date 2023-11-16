/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack<T, CNTNR>.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 03:53:09 by faksouss          #+#    #+#             */
/*   Updated: 2023/11/16 04:26:10 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <deque>
#include <stack>

template<class T, typename CNTNR>

MutantStack<T, CNTNR>::MutantStack( void ) : std::stack<T, CNTNR>() {}

template<class T, typename CNTNR>

MutantStack<T, CNTNR>::MutantStack( MutantStack<T, CNTNR> const &obj ) {*this = obj;}

template<class T, typename CNTNR>

MutantStack<T, CNTNR>::~MutantStack( void ) {}

template<class T, typename CNTNR>

MutantStack<T, CNTNR> &MutantStack<T, CNTNR>::operator=( MutantStack<T, CNTNR> const &obj ) {
    if (this != &obj)
        this->c = obj.c;
    return *this;
}

template<class T, typename CNTNR>

typename MutantStack<T, CNTNR>::iterator MutantStack<T, CNTNR>::begin() {return this->c.begin();}

template<class T, typename CNTNR>

typename MutantStack<T, CNTNR>::iterator MutantStack<T, CNTNR>::end() {return this->c.end();}

template<class T, typename CNTNR>

typename MutantStack<T, CNTNR>::reverse_iterator MutantStack<T, CNTNR>::rbegin() {return this->c.rbegin();}

template<class T, typename CNTNR>

typename MutantStack<T, CNTNR>::reverse_iterator MutantStack<T, CNTNR>::rend() {return this->c.rend();}

template<class T, typename CNTNR>

typename MutantStack<T, CNTNR>::const_iterator MutantStack<T, CNTNR>::cbegin() {return this->c.cbegin();}

template<class T, typename CNTNR>

typename MutantStack<T, CNTNR>::const_iterator MutantStack<T, CNTNR>::cend() {return this->c.cend();}

template<class T, typename CNTNR>

typename MutantStack<T, CNTNR>::const_reverse_iterator MutantStack<T, CNTNR>::crbegin() {return this->c.crbegin();}

template<class T, typename CNTNR>

typename MutantStack<T, CNTNR>::const_reverse_iterator MutantStack<T, CNTNR>::crend() {return this->c.crend();}

