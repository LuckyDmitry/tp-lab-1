#include "../include/task4.h"
#include <string>
#include <iostream>

char* sum(char* x, char* y){
	int lengthX = len(x);
	int lengthY = len(y);
	int maxLength = lengthX > lengthY ? lengthX : lengthY;
	--lengthX;
	--lengthY;
	char* sum = new char[maxLength];
    int rest = 0;
    for (int i = maxLength - 1; i >= 0; --i){
        int addition = (lengthX >= 0 ? x[lengthX--] : '0') + (lengthY >= 0 ? y[lengthY--] : '0') + rest - 2 * '0';
        sum[i] = (addition % 10) + '0';
        rest = addition / 10;
    }
	char* result;
    if (rest){
 		result = new char[maxLength + 2];
        for (int i = 1; i <= maxLength; ++i) result[i] = sum[i - 1];
        result[0] = '1';
        result[maxLength + 1] = '\0';
    }
    else {
        result = new char[maxLength + 1];
        for (int i = 0; i <= maxLength - 1; ++i){
            result[i] = sum[i];
        }
        result[maxLength] = '\0';
    }
    return result;
} 
