
#include <iostream>
#include <cstring>
#include "task4.h"
char * sum(char *x, char *y) {

	int i = 0;
	int find = 0;
	int lx = strlen(x);
	int ly = strlen(y);

	if (ly > lx) {
		int tmp = lx;
		lx = ly;
		ly = tmp;
		char *tmpp = x;
		x = y;
		y = tmpp;
	}

	char *res = new char[lx + 1];
	res[lx] = 0;

	while (ly - i > 0) {
		int cur = x[ly - i - 1] - '0' + y[ly - i - 1] - '0' + find;
		res[i] = '0' + (cur % 10);
		find = cur / 10;
		i++;
	}

	while (lx - i > 0) {
		int cur = x[lx - i - 1] - '0' + find;
		res[i] = '0' + (cur % 10);
		find = cur / 10;
		i++;
	}

	if (find) {
		res[i] = '0' + find;
		i++;
	}

	for (int j = 0; j < i / 2; j++) {
		char tmp = res[j];
		res[j] = res[i - j - 1];
		res[i - j - 1] = tmp;
	}

	res[i] = 0;
	return res;
}