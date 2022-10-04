/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 11:07:05 by ibulak        #+#    #+#                 */
/*   Updated: 2022/10/04 11:07:06 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize( Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}

int main( void ) {
    Data *data = new Data(42);
    uintptr_t raw = serialize(data);
    Data *newData = deserialize(raw);
    std::cout << "address of data: " << data << std::endl;
    std::cout << "raw: " << raw << std::endl;
    std::cout << "address of newData: " << newData << std::endl;
    delete data;
}