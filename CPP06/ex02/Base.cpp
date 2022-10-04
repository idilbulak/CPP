/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 13:11:08 by ibulak        #+#    #+#                 */
/*   Updated: 2022/10/04 13:11:19 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base( void ) {};

Base* generate( void ) {
    srand((unsigned int)time(NULL));
    int randombool = (rand() % 3);
        switch (randombool) {
            case 0: return new A;
            case 1: return new B;
            case 2: return new C;
            default: return NULL;
        }
}

void identify(Base* p) {
    A *a = dynamic_cast<A *>(p);
    if (a)
        std::cout << "A" << std::endl;
    B *b = dynamic_cast<B *>(p);
    if (b)
        std::cout << "B" << std::endl;
    C *c = dynamic_cast<C *>(p);
    if (c)
        std::cout << "C" << std::endl;
}

void identify(Base& p) {
    try {
        A &a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        static_cast<void>(a);
    }
    catch (std::bad_cast& exception) {
        std::cerr << exception.what() << ": not A." << std::endl;
    }
    try {
        B &b = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        static_cast<void>(b);
    }
    catch (std::bad_cast& exception) {
        std::cerr << exception.what() << ": not B." << std::endl;
    }
    try {
        C &c = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        static_cast<void>(c);
    }
    catch (std::bad_cast& exception) {
        std::cerr << exception.what() << ": not C." << std::endl;
    }
}

