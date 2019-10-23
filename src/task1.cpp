#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max) {
	unsigned int i = 0;
	unsigned long result = 20;
	bool flag = true;
	while (true) {
		flag = true;
		for (i = min; i < max; i++) {
			if (result % i != 0) {
				flag = false;
				break;
			}
		}
		if (flag == true) {
			return result;
		}
		else {
			result++;
		}
	}
	return 0;
}