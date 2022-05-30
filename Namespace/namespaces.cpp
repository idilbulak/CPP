#include <stdio.h>

int		gl_var = 1;
int		f( void ) { return 2; }

namespace Foo {
	
	int		gl_var = 3;
	int		f( void ) { return 4; }	

}

namespace Bar {

	int		gl_var = 5;
	int		f( void ) { return 6; }

}

namespace Muf = Bar;


int		main( void ) {

	printf( "gl_var:		[%d]\n", gl_var );
	printf( "f():		[%d]\n\n", f() );

	printf( "Foo::gl_var:	[%d]\n", Foo::gl_var );
	printf( "Foo::f():	[%d]\n\n", Foo::f() );

	printf( "Bar::gl_var:	[%d]\n", Bar::gl_var );
	printf( "Bar::f():	[%d]\n\n", Bar::f() );
	
	printf( "Muf::gl_var:	[%d]\n", Muf::gl_var );
	printf( "Muf::f():	[%d]\n\n", Muf::f() );

	printf( "::gl_var:	[%d]\n", ::gl_var );
	printf( "::f():		[%d]\n", ::f() );

	return 0;
}

/*	g++ -Wall -Wextra -Werror namespaces.cpp  */

/*  :: scope resolution operator is used to qualify hidden names so 
	that you can still use them. You can use the unary scope operator 
	if a namespace scope or global scope name is hidden by an explicit 
	declaration of the same name in a block or class.                   */