#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"

int main() {
	int val;
	int n;
	scanf("%d", &val);
	scanf("%d", &n);
	printf("%d\n", checkPrime(val));
	printf("%d\n", nPrime(n));
	printf("%d\n", nextPrime(val));
}