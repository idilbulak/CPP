#include "Span.hpp"

int main(void) {
	{
		std::cout << "..........[ TEST_1 ].........." << std::endl;
		Span span = Span(5);
		span.addNumber(4);
		span.addNumber(3);
		span.addNumber(1);
		span.addNumber(2);
		span.addNumber(5);
		std::cout << "shortestspan: " << span.shortestSpan() << std::endl;
		std::cout << "longestspan: " << span.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "..........[ TEST_2 ].........." << std::endl;
		Span span = Span(10000);
		span.addNumberRange(0, 10000);
		std::cout << "shortestspan: " << span.shortestSpan() << std::endl;
		std::cout << "longestspan: " << span.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "..........[ TEST_3 ].........." << std::endl;
		Span span = Span(10000);
		span.addNumberRange(0, 20000);
		std::cout << std::endl;
	}
	{
		std::cout << "..........[ TEST_4 ].........." << std::endl;
		Span span(2);
		try {
			span.addNumber(0);
			span.shortestSpan();
		} catch (std::exception &exception) {
			std::cerr << exception.what() << std::endl;
		}
		std::cout << std::endl;
	}
	{
		std::cout << "..........[ TEST_5 ].........." << std::endl;
		Span span(1);
		try {
			span.addNumber(0);
			span.addNumber(0);
		} catch (std::exception &exception) {
			std::cerr << exception.what() << std::endl;
		}
		std::cout << std::endl;
		
	}
    return 0;
}

