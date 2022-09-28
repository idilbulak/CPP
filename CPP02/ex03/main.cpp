/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ibulak <ibulak@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/27 10:48:44 by ibulak        #+#    #+#                 */
/*   Updated: 2022/09/27 10:48:45 by ibulak        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

int main(void) {
  // std::cout.setf(std::ios::boolalpha);
  std::cout << bsp::bsp(Point(0, 1), Point(4, 0), Point(4, 2),
                        Point(2, 1))
            << std::endl; // true
  std::cout << bsp::bsp(Point(0.0f, 0.0f), Point(0.0f, 0.0f), Point(0.0f, 0.0f),
                        Point(0.0f, 0.0f))
            << std::endl; // false
  std::cout << bsp::bsp(Point(0.0f, 0.0f), Point(0.0f, 1.0f), Point(1.0f, 0.0f),
                        Point(0.4f, 0.4f))
            << std::endl; // true
  return 0;
}