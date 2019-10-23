#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <stdio.h>
int main() {
	unsigned number;
	scanf("%d", &number);
	printf("%d\n", checkPrime(number));
	printf("%d\n", nPrime(number));
	printf("%d\n", nextPrime(number));
}