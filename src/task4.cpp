#include <iostream>
using namespace std;
char * sum(char *x, char *y) {
	int numx = 0, numy = 0, i, max;
	i = 0;
	while (*(x + i) != '\0') {
		i++;
	}
	numx = i - 1;
	i = 0;
	while (*(y + i) != '\0') {
		i++;
	}
	numy = i - 1;
	if (numx > numy) {
		max = numx;
	}
	else {
		max = numy;
	}
	max += 2;
	char *ret = new char[max + 1], buf = 0;
	for (int j = 0; j < max; j++) {
		ret[j] = '0';
	}
	ret[max] = '\0';
	for (int j = max - 1; j >= 0; j--) {
		if (numx >= 0) {
			buf += *(x + numx);
		}
		else {
			buf += '0';
		}
		if (numy >= 0) {
			buf += *(y + numy);
		}
		else {
			buf += '0';
		}
		buf -='0';
		if (buf > '9') {
			ret[j] = buf - 10;
			buf = 1;
			numx--;
			numy--;
		}
		else {
			ret[j] = buf;
			buf = 0;
			numx--;
			numy--;
		}
	}
	char * sup = ret, *newret;
	max++;
	while (*ret == '0') {
		max--;
		ret += 1;
	}
	newret = new char[max];
	for (int l = 0; l < max; l++) {
		newret[l] = *(ret + l);
	}
	delete sup;
	return newret;
}