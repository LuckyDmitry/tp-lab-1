#include <stdio.h>
#include <iostream>
#include "task2.h"

int main()
{
	long long n = 11;
	printf("n=%lld", n);
	printf("\ncheckPrime=%lld", checkPrime(n));
	printf("\nnPrime=%lld", nPrime(n));
	printf("\nnextPrime=%lld", nextPrime(n));
	return 1;
} 
