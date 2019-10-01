#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include "Math.h"
#include <string.h>
#include <algorithm>




char * sum(char *x, char *y)
{
	int l;
	int diff;
	if (strlen(x) - strlen(y) > 0)
	{
		l = strlen(x);
		diff = strlen(x) - strlen(y);
	}
	else
	{
		l = strlen(y);
		diff = strlen(y) - strlen(x);
	}
	char *str1 = new char[l];
	char *str2 = new char[l];
	char *sum = new char[l + 1];

	
	
	for (int i = 0; i < l + 1; i++)
	{
		sum[i] = '0';
	}
	sum[l + 1] = '\0';

	if (strlen(x) >= strlen(y))
	{
		strcpy(str1, x);
		for (int i = 0; i < diff; i++)
		{
			str2[i] = '0';
		}
		for (int i = diff; i < l; i++)
		{
			str2[i] = y[i - diff];
		}
		str2[l] = '\0';
	}
	else
	{
		strcpy(str1, y);
		for (int i = 0; i < diff; i++)
		{
			str2[i] = '0';
		}
		for (int i = diff; i < l; i++)
		{
			str2[i] = x[i - diff];
		}
		str2[l] = '\0';
	}
	for (int i = l; i > 0; i--)
	{
		int s = (sum[i] - '0') + (str1[i - 1] - '0') + (str2[i - 1] - '0');
		if (s <= 9)
		{
			sum[i] = s + '0';
		}
		else
		{
			sum[i] = s % 10 + '0';
			sum[i - 1] = sum[i - 1] + 1;
		}
	}
	if (sum[0] == '0')
	{
		for (int i = 0; i < l; i++)
		{
			sum[i] = sum[i + 1];
		}
		sum[l] = 0;
	}
	return sum;
}