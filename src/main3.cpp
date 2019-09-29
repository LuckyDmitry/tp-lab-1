#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>
int main() {
	unsigned int hbound;
	scanf("%I64d", &hbound);
	printf("%I64d", sumPrime(hbound));
}