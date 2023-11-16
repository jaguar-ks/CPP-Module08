/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 03:42:19 by faksouss          #+#    #+#             */
/*   Updated: 2023/11/16 08:18:58 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include<iostream>
#include<algorithm>
#include<string>
#include <list>
#include<math.h>

class Span{
    private:
            unsigned int len;
            std::list<int> lst;
            Span( void );
        public:
            Span( unsigned int len );
            Span( Span const &obj );
            ~Span( void );
            Span &operator=( Span const &obj );
            void addNumber( int const nbr );
            void addNumber( std::list<int> &lst );
            int shortestSpan( void ) const;
            int longestSpan( void ) const;
            std::list<int> getLst( void ) const;
            unsigned int getLen( void ) const;
            class AlreadyFull : public std::exception {
                public:
                    virtual const char *what() const throw();
            };
            class NoSpanCanBeFound : public std::exception {
                public:
                    virtual const char *what() const throw();
            };
};

