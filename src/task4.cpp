#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
char* sum(char* x, char* y) {
	int xlen = strlen(x);
	int ylen = strlen(y);
	int tlen;
	int n = 0;
	int i, j = 0;
	int k = 0;
	int tst1, tst2,val = 0;
	//int tlen = max(xlen, ylen);
	if (xlen > ylen ) {
		tlen = xlen;
	}
	else {
		tlen = ylen;
	}
	char* total=(char*)malloc((tlen+1)*sizeof(char));
	//char* total= new char[tlen + 1];
	n = 0;
	val = 0;



	for (int i = xlen - 1, j = ylen - 1; ((j >= 0) || (i >= 0)); j--, i--) {
		if (i >= 0) {
			tst1 = x[i] & 0x0F;
		}
		else {
			tst1 = 0;
		}
		if (j >= 0) {
			tst2 = y[j] & 0x0F;
		}
		else {
			tst2 = 0;
		}
		n = tst1 + tst2 + val;
		if (n / 10 > 0) {
			val = 1;
		}
		else {
			val = 0;
		}
		n = n % 10;
		k = k + 1;
	}
	if (val==1) {
		k = 0;
	}
	else {
		k = 1;
	}

	//k = 0;
	val = 0;


	for (int i = xlen-1,j = ylen-1;((j>=0)||(i>=0));j--,i--) {
		if (i >= 0) {
			tst1 = x[i] & 0x0F;
		}
		else {
			tst1 = 0;
		}
		if (j >= 0) {
			tst2 = y[j] & 0x0F;
		}
		else {
			tst2 = 0;
		}
		n = tst1 + tst2 + val;
		if (n / 10 > 0) {
			val = 1;
		}
		else {
			val = 0;
		}
		n = n % 10;
		total[tlen-k] = (n) | 0x30;
	//	printf("%c", total[tlen-k]);
		k = k + 1;
	}
	if (val == 1) {
		total[tlen-k] = 1 | 0x30;
		total[tlen + 1] = '\0';
	}
	else {
		total[tlen] = '\0';
	}
	return total;
}