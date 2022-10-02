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
}
