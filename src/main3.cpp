#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"


int main() {
	int hbound;
	scanf("%d", &hbound);
	printf("%I64d", sumPrime(hbound));
}