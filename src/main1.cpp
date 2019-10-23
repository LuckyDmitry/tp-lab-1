#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"
int main() {
	unsigned min, max;
	scanf("%d%d", &min, &max);
	printf("%d", findValue(min, max));
}