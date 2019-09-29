#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <stdio.h>
int main() {
	unsigned num;
	scanf("%d", &num);
	printf("%d\n", checkPrime(num));
	printf("%d\n", nPrime(num));
	printf("%d\n", nextPrime(num));
}