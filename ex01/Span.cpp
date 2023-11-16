/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 04:20:52 by faksouss          #+#    #+#             */
/*   Updated: 2023/11/16 08:34:52 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <cstdlib>
#include <exception>
#include <stdexcept>

Span::Span( unsigned int len ) : len(len) {}

Span::Span( const Span &obj) {*this = obj;}

Span &Span::operator=( const Span &obj ) {
    if (this != &obj){
        this->len = obj.getLen();
        this->lst = obj.getLst();
    }
    return *this;
}

Span::~Span( void ) {}

void Span::addNumber( int const nbr ) {
    if (this->len == this->lst.size())
        throw Span::AlreadyFull();
    this->lst.push_back(nbr);
}

void Span::addNumber( std::list<int> &lst ){
    if (lst.size() > this->len)
        throw Span::AlreadyFull();
    this->lst.assign(lst.begin(), lst.end());
}

std::list<int> Span::getLst( void ) const {return this->lst;}

unsigned int Span::getLen( void ) const {return this->len;}

const char *Span::AlreadyFull::what() const throw() {return "Can't add to the span the size reached the max";}

const char *Span::NoSpanCanBeFound::what() const throw() {return "No Span found to return";}

int Span::shortestSpan( void ) const {
    if (this->lst.empty() || this->lst.size() == 1)
        throw Span::NoSpanCanBeFound();
    int sp = this->longestSpan();
    std::list<int> tmp = this->lst;
    tmp.sort();
    std::list<int>::iterator it1 = tmp.begin(), it2;
    while (it1 != tmp.end()){
        it1++;
        it2 = it1;
        it1--;
        for (;it2 != tmp.end(); it2++)
            if (sp > abs(*it1 - *it2))
                sp = abs(*it1 - *it2);
        it1++;
    }
    return sp;
}

int Span::longestSpan( void ) const {
    std::list<int> tmp = this->lst;
    if (this->lst.empty() || this->lst.size() == 1)
        throw Span::NoSpanCanBeFound();
    tmp.sort();
    return abs(tmp.front() - tmp.back());
}
