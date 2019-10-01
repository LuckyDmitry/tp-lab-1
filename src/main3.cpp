#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include "task3.h"
#include "task2.h"



int main()
{
	unsigned int hbound;
	std::cout << "Input hbound:";
	std::cin >> hbound;
	std::cout << "sumPrime=" << sumPrime(hbound);


	return 0;
}