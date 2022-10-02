#include <iostream>
#include "Array.hpp"

int main(void) {
{
	std::cout << "=================================" << std::endl;
	std::cout << std::endl;
	Array<int> a;
	std::cout << "a:" << a << std::endl;
}
{
	std::cout << std::endl;
	Array<std::string> a;
	std::cout << "a:" << a << std::endl;
}
{
	std::cout << "=================================" << std::endl;
	std::cout << std::endl;
	Array<int> b(10);
	std::cout << "b:" << b << std::endl;
	b[0] = 1;
	std::cout << "b[0] = 1:" << std::endl;
	std::cout << "b:" << b << std::endl;
	Array<int> c(b);
	std::cout << "c:" << c << std::endl;
	std::cout << "c[1] = 1" << std::endl;
	c[1] = 1;
	std::cout << "c:" << c << std::endl;
}
{
	std::cout << std::endl;
	Array<std::string> b(10);
	std::cout << "b:" << b << std::endl;
	b[0] = '1';
	std::cout << "b[0] = '1':" << std::endl;
	std::cout << "b:" << b << std::endl;
	Array<std::string> c(b);
	std::cout << "c:" << c << std::endl;
	std::cout << "c[1] = '1'" << std::endl;
	c[1] = '1';
	std::cout << "c:" << c << std::endl;
}
{
	std::cout << "=================================" << std::endl;
	std::cout << std::endl;
	Array<int> d(2);
	d[0] = 1;
	d[1] = 1;
	std::cout << "d:" << d << std::endl;
	Array<int> e(5);
	std::cout << "e:" << e << std::endl;
	e = d;
	std::cout << "e = d" << std::endl;
	std::cout << "e:" << e << std::endl;
	e[0] = 0;
	std::cout << "e[0] = 0:" << std::endl;
	std::cout << "e:" << e << std::endl;
	std::cout << "e[5] = 0:" << std::endl;
	try {
		e[5] = 1;
	}
	catch(std::exception& exception) {
		std::cerr << exception.what() << std::endl;
	}
	std::cout << "e[-5] = 0:" << std::endl;
	try {
		e[-5] = 1;
	}
	catch(std::exception& exception) {
		std::cerr << exception.what() << std::endl;
	}
}
{
	std::cout << std::endl;
	Array<std::string> d(2);
	d[0] = "right";
	d[1] = "left";
	std::cout << "d:" << d << std::endl;
	Array<std::string> e(5);
	std::cout << "e:" << e << std::endl;
	e = d;
	std::cout << "e = d" << std::endl;
	std::cout << "e:" << e << std::endl;
	e[0] = "left";
	std::cout << "e[0] = \"left\":" << std::endl;
	std::cout << "e:" << e << std::endl;
	std::cout << "e[5] = \"0\":" << std::endl;
	try {
		e[5] = "0";
	}
	catch(std::exception& exception) {
		std::cerr << exception.what() << std::endl;
	}
	std::cout << "e[-5] = \"0\":" << std::endl;
	try {
		e[-5] = "0";
	}
	catch(std::exception& exception) {
		std::cerr << exception.what() << std::endl;
	}
}
	std::cout << std::endl;
}
