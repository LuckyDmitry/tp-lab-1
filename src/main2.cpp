#include "task2.h"
#include <iostream>

int main() {
	unsigned long long input;
	std::cin >> input;
	if (checkPrime(input)) {
		std::cout << "It is prime." << std::endl;
	}
	else {
		std::cout << "It is not prime." << std::endl;
	}
	std::cin >> input;
	std::cout << "Prime of this number is " << nPrime(input) << std::endl;
	std::cin >> input;
	std::cout << "Next prime is " << nextPrime(input) << std::endl;
}