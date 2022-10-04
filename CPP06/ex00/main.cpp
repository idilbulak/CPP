/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 10:58:50 by ibulak        #+#    #+#                 */
/*   Updated: 2022/10/04 11:00:27 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main( int argc, char **argv ) {

    if (argc == 2) {
        try {
            Converter x(argv[1]);
            x.ft_print();
        }
        catch (std::exception& exception) {
            std::cerr << exception.what() << std::endl;
        }
    }
    else
        std::cerr << "Error" << std::endl;
}
