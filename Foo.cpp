#include "Foo.h"
#include <math.h>
#include <iostream>
int Foo(int a, int p) {
	std::cout << "third message" << std::endl;
	return pow(a,p);
};