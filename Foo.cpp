#include "Foo.h"
#include <math.h>
#include <iostream>
int Foo(int a, int p) {
	std::cout << "some message" << std::endl;
	return pow(a,p);
};