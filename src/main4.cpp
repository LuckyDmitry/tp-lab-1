#include <iostream>
#include "task4.h"


int main() {
	char *x = (char*)"123";
	char *y = (char*)"123";
	char *r = sum(x, y);
	std::cout << r;
	return 0;
}