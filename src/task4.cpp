#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <algorithm>
#include "task4.h"


char* sum(char *x, char *y)
{
	int msum = 0;
	unsigned long int maxlen;
	unsigned long int xlen = strlen(x);
	unsigned long int ylen = strlen(y);
	maxlen = xlen+1;
	if (ylen > xlen)
	{
		maxlen = ylen+1;
	}

	char* sum = new char[maxlen];

	for (int i = 1; i <= maxlen; i++)
	{
		if (i <= xlen)
		{
			msum = msum+ (x[(xlen - i)] - 48);
		}
		if (i <= ylen)
		{
			msum = msum+ (y[(ylen - i)] - 48);
		}
		sum[maxlen - i] = msum % 10 + 48;
		msum = msum / 10;
	}

	sum[maxlen] = '\0';

	if (*(sum) == '0')
		sum = sum + 1;
	return sum;
}