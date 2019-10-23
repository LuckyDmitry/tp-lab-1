#include <stdio.h>

unsigned long findValue(unsigned int min, unsigned max) {
	unsigned long a = max;
	int k = 0;
	while (1) {
		for (int i = min; i <= max; i++) {
			if (a % i == 0) {
				k = k + 1;
			}
		}
		if (k == max) {
			return a;
		}
		a = a + 1;
		k = 0;
	}
}