#include <iostream>
#include "test.h"

template <>
void Foo::sayHello(Bar<int>& msg)
{
	std::cout << "Bar<int> version" << std::endl;
}

