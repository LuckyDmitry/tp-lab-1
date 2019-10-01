#include <algorithm>
#include "task4.h"

char* sum(char* x, char* y) {
	int lenx = strlen(x);
	int leny = strlen(y);
	int maxlen = 0, i = 0, k = 0, z = 0;
	if (lenx > leny) {
		maxlen = lenx + 1;
	}
	else {
		maxlen = leny + 1;
	}
	char* res = (char*)malloc((maxlen + 1) * sizeof(char));
	for (i = 0; i < maxlen; i++) { 
		res[i] = '0'; 
	}
	for (i = maxlen - 1, k = lenx - 1; k >= 0; i--, k--) {
		res[i] = res[i] - '0' + x[k];
	}
	for (i = maxlen - 1, k = leny - 1; k >= 0; i--, k--) {
		res[i] = res[i] - '0' + y[k];
	}
	for (i = maxlen - 1; i >= 0; i--) {
		if (res[i] > '9') {
			res[i] = res[i] - 10;
			res[i - 1]++;
		}
	}
	for (i = 0; i < maxlen && res[i] == '0'; i++) {
		z++;
	}
	int lenresult = maxlen - z;
	if (lenresult == 0) { 
		lenresult = 1; 
	}
	char* result = (char*)malloc((lenresult + 1) * sizeof(char));
	for (i = lenresult - 1, k = maxlen - 1; i >= 0 && k >= 0; i--, k--) {
		result[i] = res[k];
	}
	result[lenresult] = 0;
	return result;
}