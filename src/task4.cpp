#include <iostream>
#include <string.h>
#include <malloc.h>
#include <algorithm>
#include "task4.h"

using namespace std;

char * sum(char *x, char *y)
{
	int xsize = strlen(x), ysize = strlen(y), zsize, d=0, d1=0;
	if (xsize > ysize) zsize = xsize+1;
	else zsize = ysize+1;
	char * z=(char*)malloc(zsize);
	for (int i = zsize - 1; i >= 0;)
	{
		if (xsize == 0 && ysize == 0) break;
		int a, b;
		if (xsize == 0) { a = 0; b = y[--ysize] - '0';}
		else if (ysize == 0) { a = x[--xsize] - '0'; b = 0; }
		else {
			a = x[--xsize] - '0';
			b = y[--ysize] - '0';
		}
		if (a + b + d < 10) {
			z[i--] = (a + b + d)+'0'; d = 0;
		}
		else {
			z[i--] = ((a + b + d) % 10)+'0'; d = 1;
		}
	}
	z[zsize] = '\0';
	if(d==0) return ++z;
	else {
		z[0] = '1'; return z;
	}
}