#include "task4.h"
#include <string>
#include <iostream>


int main()
{
	const char *x = "99999999999999999999";
	const char *y = "1";

	std::string X(x);
	std::string Y(y);
	char* r = sum((char*)x, (char*)y);
	std::string R(r);

	std::cout << X << "\n";
	std::cout << Y << "\n\n";
	std::cout << R << "\n";

	delete r;
}