#include "Converter.hpp"
#include <math.h>

Converter::Converter( void )
	: _string(""), _valued(0.0), _valuef(0.0), _valuei(0), _type(0) {}

Converter::Converter( const std::string &string ) 
	:_string(string), _valued(0.0), _valuef(0.0), _valuei(0), _type(0) {
		if ((string.find("f") != std::string::npos )) {
			try {
				(_valuef) = std::stof(string);
				const_cast<int &>(_type) = 1;
			}
			catch (std::exception& exception) {
            	throw exception;
			}
		}
		else if (string.find(".") != std::string::npos || isnan(std::stod(string))) {
			try {
				(_valued) = std::stod(string);
				const_cast<int &>(_type) = 2;
			}
			catch (std::exception& exception) {
            	throw exception;
			}
		}
		else {
			try {
				_valuei = std::stoi(string);
			}
			catch (std::exception& exception) {
        	    throw exception;
			}
		}	
}

Converter::Converter( const Converter& converter ) {
	const_cast<std::string &>(_string) = converter._string;
	const_cast<int &>(_type) = converter._type;
	const_cast<int &>(_valuei) = converter._valuei;
	const_cast<double &>(_valued) = converter._valued;
	const_cast<float &>(_valuef) = converter._valuef;
	*this = converter;
}

Converter::~Converter( void ) {}

Converter &Converter::operator=( const Converter& converter ) {
	const_cast<std::string &>(_string) = converter._string;
	return *this;
}

const std::string& Converter::getString( void ) const {
	return _string;
}

double& Converter::getValued( void ) {
	return _valued;
}

float& Converter::getValuef( void ) {
	return _valuef;
}

int& Converter::getValuei( void ) {
	return _valuei;
}

int& Converter::getType( void ) {
	return _type;
}

void Converter::ft_print( void ) {
	if (_type == 0)
		ft_printInt();
	else if (_type == 1)
		ft_printFloat();
	else if (_type == 2)
		ft_printDouble();
	else
		std::cout << "ERROR" << std::endl;
}

void Converter::ft_printInt( void ) {
	if (isnan(getValuei()) || isinf(getValuei()))
		std::cout << "char: impossible\nint: impossible" << std::endl;
	else if (not isprint(getValuei()) || not isprint(getValuei()))
		std::cout << "char: Non displayable\nint: " << getValuei() << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(getValuei()) << "'\nint: " << getValuei() << std::endl;
	std::cout.setf ( std::ios::fixed );
	std::cout.precision(1);
	std::cout << "float: " << static_cast<float>(getValuei()) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(getValuei()) << std::endl;
}

void Converter::ft_printFloat( void ) {
	if (isnan(getValuef()) || isinf(getValuef()))
		std::cout << "char: impossible\nint: impossible" << std::endl;
	else if (not isprint(getValuef()) || not isprint(getValuef()))
		std::cout << "char: Non displayable\nint: " << static_cast<int>(getValuef()) << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(getValuef()) << "'\nint: " << static_cast<int>(getValuef()) << std::endl;
	size_t index = (&_string)->find(".") + 1;
	int length = (&_string)->length();
	std::cout.setf ( std::ios::fixed );
	std::cout.precision(length - index - 1);
	std::cout << "float: " << getValuef() << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(getValuef()) << std::endl;
}

void Converter::ft_printDouble( void ) {
	if (isnan(getValued()) || isinf(getValued()))
		std::cout << "char: impossible\nint: impossible" << std::endl;
	else if (not isprint(getValued()) || not isprint(getValued()))
		std::cout << "char: Non displayable\nint: " << static_cast<int>(getValued()) << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(getValued()) << "'\nint: " << static_cast<int>(getValued()) << std::endl;
	size_t index = (&_string)->find(".") + 1;
	int length = (&_string)->length();
	std::cout.setf ( std::ios::fixed );
	std::cout.precision(length - index);
	std::cout << "float: " << static_cast<float>(getValued()) << "f" << std::endl;
	std::cout << "double: " << getValued() << std::endl;
}



