#include "task1.h"

unsigned long  findValue(unsigned int min, unsigned max) {
	unsigned long LeastMultiple = min, nextNum, num1, num2;
	for (nextNum = min + 1; nextNum <= max; nextNum++) {
		num1 = LeastMultiple;
		num2 = nextNum;
		while (num1 != num2) {
			if (num1 > num2) {
				num1 -= num2;
			}
			else {
				num2 -= num1;
			}
		}
		LeastMultiple = LeastMultiple / num1 * nextNum;
	}
	return LeastMultiple;
}