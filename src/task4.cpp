#include "task4.h"
#include <iostream>
using namespace std;


char* sum(char* x, char* y) {
	int lenX = strlen(x), lenY = strlen(y);
	int remainder = 0, subtotal = 0;
	int maxLen = (lenX > lenY)?lenX:lenY;
	char* sum = new char[maxLen];
	lenX--;
	lenY--;
	//summation
	for (int i = maxLen - 1; i >= 0; i--, lenX--, lenY--) {
		subtotal = ((lenX >= 0)?x[lenX]:'0') + ((lenY >= 0)?y[lenY]:'0') - 2 * '0' + remainder;
		sum[i] = (subtotal % 10) + '0';
		remainder = subtotal/10;
	}	
	//result formation
	char* result;
	if (remainder) {

		result = new char[maxLen + 2];
		for (int i = maxLen; i > 0; i--) {
			result[i] = sum[i - 1];
		}
		result[0] = '1';
		result[maxLen + 1] = '\0';

	}
	else {
		result = new char[maxLen + 1];
		for (int i = 0; i < maxLen; i++) {
			result[i] = sum[i];
		}
		result[maxLen] = '\0';
	}
	return result;
}