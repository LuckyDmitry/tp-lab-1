#include <iostream>
#include "task4.h"


int main() {
	char x[] = "13423";
	char y[] = "32219";
	char *r = sum(x, y);
	std::cout << r;
	return 0;
}