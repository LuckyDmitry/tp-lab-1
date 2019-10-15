#include "task4.h"
#include <string>

char* sum(char* x, char* y) {
	int symbolX = strlen(x) - 1, symbolY = strlen(y) - 1, symbolRes, lenOfRes = 1, remainder = 0;
	char digitX, digitY;
	if (strlen(x) > strlen(y)) {
		lenOfRes += strlen(x);
	}
	else {
		lenOfRes += strlen(y);
	}
	char* result = (char*)malloc(sizeof(char) * lenOfRes);
	result[lenOfRes - 1] = '\0';
	symbolRes = lenOfRes - 2;
	while (symbolRes >= 0) {
		if (symbolX >= 0) {
			digitX = x[symbolX];
			symbolX--;
		}
		else {
			digitX = '0';
		}
		if (symbolY >= 0) {
			digitY = y[symbolY];
			symbolY--;
		}
		else {
			digitY = '0';
		}
		if (digitX - '0' + digitY - '0' + remainder < 10) {
			result[symbolRes] = digitX - '0' + digitY + remainder;
			remainder = 0;
		}
		else if (symbolRes == 0){
			char* resultExtended = (char*)malloc(sizeof(char) * (lenOfRes + 1));
			resultExtended[0] = '1';
			strcpy_s(resultExtended + 1, lenOfRes, result);
			free(result);
			resultExtended[1] = digitX - '0' + digitY + remainder - 10;
			return resultExtended;
		}
		else {
			result[symbolRes] = digitX - '0' + digitY + remainder - 10;
			remainder = 1;
		}
		symbolRes--;
	}
	return result;
}