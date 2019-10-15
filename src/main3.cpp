#include "task2.h"
#include "task3.h"
#include <iostream>

int main() {
	unsigned int input;
	std::cin >> input;
	std::cout << "Sum of primes less than " << input << " is " << sumPrime(input) << std::endl;
	std::cout << "Sum of primes less than 2.000.000 is " << sumPrime(2000000) << std::endl;
}