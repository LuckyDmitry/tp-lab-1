#include <iostream>
#include "task4.h"


int main() {
	char *x = (char*)"99999999999999999999";
	char *y = (char*)"1";
	char *r = sum(x, y);
	std::cout << r;
	return 0;
}