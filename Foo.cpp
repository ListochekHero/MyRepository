#include "Foo.h"
#include <math.h>
#include <iostream>
int Foo(int a, int p) {
	std::cout << "forth message" << std::endl;
	std::cout << "new message" << std::endl;
	return pow(a,p);
};