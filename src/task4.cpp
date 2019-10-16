#include "../include/task4.h"
#include <string.h>
#include <iostream>
#include <cstdlib>

char* sum(char* x, char* y) {
	int len;
	char* ans;
	int length_x = strlen(x); 
	int length_y = strlen(y);
	if (length_x > length_y) {
		len = length_x;
	}
	else {
		len = length_y;
	}
	int ans_len = len + 1; 
	ans = (char*)malloc((ans_len) * sizeof(char));  
	int tx = 0, ty = 0;
	int sum_xy = 0;
	for (int i = 0; i < (ans_len); i++) {
		tx = 0;
		ty = 0;
		if (i < length_x) {
			tx = (*(x + length_x - 1 - i) - '0');
		}
		if (i < length_y) {
			ty = (*(y + length_y - 1 - i) - '0');
		}
		sum_xy = sum_xy + tx + ty;
		ans[ans_len - 1 - i] = char(sum_xy % 10); 
		sum_xy = sum_xy / 10; 
	}
	ans[ans_len] = '\0'; 
	if (*ans == '0') {
		for (int i = 0; i <= ans_len; i++)
		{
			*(ans + i) = *(ans + i + 1);
		}
	}
	return ans;
}
