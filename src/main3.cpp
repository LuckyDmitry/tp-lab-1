#include "task2.h"
#include "task3.h"
#include <iostream>

int main() {
	unsigned int input;
	std::cin >> input;
	std::cout << "Sum of primes less than " << input << " is " << sumPrime(input) << std::endl;
}