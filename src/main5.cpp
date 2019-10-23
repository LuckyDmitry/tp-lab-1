#include "task5.h"
#include <iostream>

int main() {
	char buf[100], separator;
	char** result = NULL;
	int n;
	std::cout << "Enter the string." << std::endl;
	std::cin.getline(buf, 100);
	std::cout << "Dividing symbol:" << std::endl;
	std::cin.get(separator);
	split(&result, &n, buf, separator);
	std::cout << n << " Substrings:" << std::endl;
	for (int i = 0; i < n; i++) {
		std::cout << result[i] << std::endl;
	}
	return 0;
}