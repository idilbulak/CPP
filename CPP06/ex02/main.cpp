#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main ( void ) {
    Base *base = generate();
    std::cout << "Base is generated." << std::endl;
    if (base) {
        std::cout << "Base* p is pointing to ";
        identify(base);
        std::cout << "Base& p is pointing to ";
        identify(base);
    }
}