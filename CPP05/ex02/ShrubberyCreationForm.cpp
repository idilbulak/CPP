#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void ) {
		// std::cout << GREEN << "[ ShrubberyCreationForm ] " << "Default constructor called" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& form) {
	// std::cout << GREEN << "[ ShrubberyCreationForm ] " << "Copy constructor called" << RESET << std::endl;
	*this = form;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& form) {
	const_cast<std::string&>(_target) = form.getTarget();
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	// std::cout << GREEN << "[ ShrubberyCreationForm ] " << "Destructor called" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target ) 
	: Form("ShrubberyCreationForm", _signGrade, _executeGrade) {
	const_cast<std::string&>(_target) = target;
	// std::cout << GREEN << "[ ShrubberyCreationForm ] " << "Destructor called" << RESET << std::endl;
}

const std::string& ShrubberyCreationForm::getTarget( void ) const {
	return _target;
}

void ShrubberyCreationForm::execute( Bureaucrat const& executor ) const {
	execute_base(executor);
	std::ofstream ostrm(getTarget() + "_shrubery", std::ofstream::out | std::ofstream::trunc);
	// if (!ostrm.good())
	//     throw FileNotWorkingException();
	ostrm <<      
"            .        +          .      .          .\n"
"     .            _        .                    .\n"
"  ,              /;-._,-.____        ,-----.__\n"
" ((        .    (_:#::_.:::. `-._   /:, /-._, `._,\n"
"  `                 \\   _|`\"=:_::.`.);  \\ __/ /\n"
"                      ,    `./  \\:. `.   )==-'  .\n"
"    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           .\n"
".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o\n"
"       .    /:+- - + +- : :- + + -:'  /(o-) \\)     .\n"
"  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7\n"
"   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/\n"
"              \\:  `  X` _| _,\\/'   .-'\n"
".               \":._:`\\____  /:'  /      .           .\n"
"                    \\::.  :\\/:'  /              +\n"
"   .                 `.:.  /:'  }      .\n"
"           .           ):_(:;   \\           .\n"
"                      /:. _/ ,  |\n"
"                   . (|::.     ,`                  .\n"
"     .                |::.    {\\\n"
"                      |::.\\  \\ `.\n"
"                      |:::(\\    |\n"
"              O       |:::/{ }  |                  (o\n"
"               )  ___/#\\::`/ (O \"==._____   O, (O  /`\n"
"          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~\n"
"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

  	std::cout << "Create Shrubbery file" << std::endl;
  	ostrm.close();
}