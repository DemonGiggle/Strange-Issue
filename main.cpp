#include <iostream>
#include "test.h"

int main()
{
	Foo foo;
	Bar<int> bar;
	Bar<double> bar2;

	foo.sayHello(bar);
	foo.sayHello(bar2);
	return 0;
}
