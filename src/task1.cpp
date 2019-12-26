#include "task1.h"
unsigned long findValue(unsigned int min, unsigned max) {
	unsigned long number = min, a, b;
	min++;
	while (min <= max) {
		if (number % min != 0) {
			//find great common divider of number and min
			a = number, b = min;			
			while (a != 0 && b != 0) {
				if (a > b) {
					a = a % b;
				}
				else b = b % a;
			}
			number *= min / (a + b);
		}
		min++;
	}
	return number;
}