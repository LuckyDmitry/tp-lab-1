#include "task1.h"
#include <iostream>

int main() {
	unsigned int input1, input2;
	std::cout << "Minimum number which is divided by 1, 2, 3..., 19 and 20 is " << findValue(1, 20) << std::endl;
	std::cin >> input1 >> input2;
	std::cout << findValue(input1, input2) << std::endl;
}