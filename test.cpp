#include <iostream>
#include "test.h"

template <>
void Foo::sayHello(int& msg)
{
	std::cout << "<int> version" << std::endl;
}
