#include <iostream>
#include "test.h"

int main()
{
	Foo foo;
	double value_double = 44;
	int value_int = 33;

	foo.sayHello(value_int);
	foo.sayHello(value_double);
	return 0;
}
