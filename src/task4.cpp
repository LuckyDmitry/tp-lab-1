#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <string.h>
#include <algorithm>
#include <iostream>
using namespace std;

char * sum(char *x, char *y)
{
	int len = max(strlen(x), strlen(y));
	int dec = strlen(x) - strlen(y);
	dec = abs(dec);
	char *a = new char[len];
	char *b = new char[len];
	char *sum = new char[len + 1];

	for (int i = 0; i < len + 1; i++)
		sum[i] = '0';
	sum[len + 1] = '\0';
	if (strlen(x) >= strlen(y))
	{
		strcpy(a, x);
		for (int i = 0; i < dec; i++)
			b[i] = '0';
		for (int i = dec; i < len; i++)
			b[i] = y[i - dec];
		b[len] = '\0';
	}
	else
	{
		strcpy(a, y);
		for (int i = 0; i < dec; i++)
			b[i] = '0';
		for (int i = dec; i < len; i++)
			b[i] = x[i - dec];
		b[len] = '\0';
	}
	for (int i = len; i > 0; i--)
	{
		int s = (sum[i] - '0') + (a[i - 1] - '0') + (b[i - 1] - '0');
		if (s <= 9)
			sum[i] = s + '0';
		else
		{
			sum[i] = s % 10 + '0';
			sum[i - 1] = sum[i - 1] + 1;
		}
	}
	if (sum[0] == '0')
	{
		for (int i = 0; i < len; i++)
		{
			sum[i] = sum[i + 1];
		}
		sum[len] = 0;
	}
	return sum;
}

