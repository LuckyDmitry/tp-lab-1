#include "task4.h"
#include <iostream>

int main() {
	char x[100], y[100];
	std::cin >> x >> y;
	std::cout << "Sum:\n" << sum(x, y) << "\n" << std::endl;
}