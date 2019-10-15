#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <iostream>

int main()
{
	long long n = 11;
	printf("\ncheckPrime=%lld", checkPrime(n));
	printf("\nnPrime=%lld", nPrime(n));
	printf("\nnextPrime=%lld", nextPrime(n));
	return 1;
} 
