#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <string.h>
#include <algorithm>

 


char * sum(char *x, char *y)
{
	int length;
	int differ;
	if (strlen(x) - strlen(y) > 0)
	{
		length = strlen(x);
		differ = strlen(x) - strlen(y);
	}
	else
	{
		length = strlen(y);
		differ = strlen(y) - strlen(x);
	}
	char *str1 = new char[length];
	char *str2 = new char[length];
	char *sum = new char[length + 1];

	
	
	for (int i = 0; i < length + 1; i++)
	{
		sum[i] = '0';
	}
	sum[length + 1] = '\0';

	if (strlen(x) >= strlen(y))
	{
		strcpy(str1, x);
		for (int i = 0; i < differ; i++)
		{
			str2[i] = '0';
		}
		for (int i = differ; i < length; i++)
		{
			str2[i] = y[i - differ];
		}
		str2[length] = '\0';
	} 
	else
	{
		strcpy(str1, y);
		for (int i = 0; i < differ; i++)
		{
			str2[i] = '0';
		}
		for (int i = differ; i < length; i++)
		{
			str2[i] = x[i - differ];
		}
		str2[length] = '\0';
	}
	for (int i = length; i > 0; i--)
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
		for (int i = 0; i < length; i++)
		{
			sum[i] = sum[i + 1];
		}
		sum[length] = '\0';
	}
	return sum;
}