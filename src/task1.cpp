#include "task1.h"
#include <stdio.h>
unsigned long findValue(unsigned int min, unsigned int max){
	for (unsigned int i = max;; i += max ) {
		int cnt = 0;
		for (unsigned int j = min; j <= max; j++) {
			if (i % j == 0) {
				cnt++;
			}
		}
		if (cnt == max) {
			return i;
		}
	}
}
