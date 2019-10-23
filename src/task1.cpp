#include "task1.h"
unsigned long findValue(unsigned int min,unsigned max){
	auto i = 1UL;
	while(true){
		char is_divided = 1;
		for (int j = min; j <= max; j++){
			if (i%j != 0){
				is_divided =0;
				break;
			}
		}
		if (is_divided == 1){
			break;
		}
		i++;
	}
	return i;
}