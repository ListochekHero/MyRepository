#include "Foo.h"
#include <math.h>
#include <iostream>
int Foo(int a, int p) {
	std::cout << "forth message" << std::endl;
	std::cout << "message for a test" << std::endl;
	return pow(a,p);
};