#include <iostream>
#include "task1.h"
 
int main() 
{
	unsigned int min, max;
	std::cin >> min;
	std::cin >> max;
	std::cout<<findValue(min, max);
	getchar();
	getchar();
	return 0;
}