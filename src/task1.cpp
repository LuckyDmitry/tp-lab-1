#include "task1.h"
unsigned long findValue(unsigned int min, unsigned max) {
	unsigned int number = 0;
	
	bool flag = true;
	unsigned int i;
	while (1) {
		flag = true;
		number++;
		for (i = min; i <= max; i++) {
			if (number % i != 0) {
				flag = false;
				break;
			}
			
		}
		if (flag) {
			return number;
		}

	}
	

}