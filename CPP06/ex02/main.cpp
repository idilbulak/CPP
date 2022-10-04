/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 13:11:48 by ibulak        #+#    #+#                 */
/*   Updated: 2022/10/04 13:11:49 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main ( void ) {
    Base *base = generate();
    if (base)
        std::cout << "Base is generated." << std::endl;
    if (base) {
        std::cout << "Base* p is pointing to ";
        identify(base);
        std::cout << "Base& p is pointing to ";
        identify(base);
    }
    delete base;
    // while(42){};
}