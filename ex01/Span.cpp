/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 04:20:52 by faksouss          #+#    #+#             */
/*   Updated: 2023/11/15 05:57:55 by faksouss         ###   ########.fr       */
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
    std::list<int> tmp = this->lst;
    if (this->lst.empty() || this->lst.size() == 1)
        throw Span::NoSpanCanBeFound();
    tmp.sort();
    std::list<int>::iterator t1 = tmp.begin();
    t1++;
    return abs(*t1 - tmp.front());
}

int Span::longestSpan( void ) const {
    std::list<int> tmp = this->lst;
    if (this->lst.empty() || this->lst.size() == 1)
        throw Span::NoSpanCanBeFound();
    tmp.sort();
    return abs(tmp.front() - tmp.back());
}
