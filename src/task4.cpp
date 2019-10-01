#include <iostream>
#include <string.h>
#include "task4.h"

char* sum(char* x, char* y)
{
	int max = 0, min = 0, tmp = 0;
	if (strlen(x) > strlen(y))
	{
		max = strlen(x);
		min = strlen(y);
	}
	else
	{
		max = strlen(y);
		min = strlen(x);
	}
	char* str1 = (char*)malloc(sizeof(char) * (max + 1));
	char* str2 = (char*)malloc(sizeof(char) * (max));
	char* str3 = (char*)malloc(sizeof(char) * (max));
	str1[max + 1] = '\0';
	str2[max] = '\0';
	str3[max] = '\0';

	for (int i = 0; i < max; i++)
	{
		str1[i] = '0';
		str2[i] = '0';
		str3[i] = '0';
	}
	str1[max] = '0';


	for (int i = 0; i < strlen(x); i++)
		str2[i] = x[strlen(x) - 1 - i];

	for (int i = 0; i < strlen(y); i++)
		str3[i] = y[strlen(y) - 1 - i];

	for (int i = 0; i < max; i++)
	{
		tmp = (int)(str1[i] - '0') + (int)(str2[i] - '0') + (int)(str3[i] - '0');
		str1[i] = '0' + (tmp % 10);
		str1[i + 1] = tmp / 10 + '0';
	}

	for (int i = 0, n = strlen(str1); i < n / 2; i++)
	{
		char tmp = str1[i];
		str1[i] = str1[n - i - 1];
		str1[n - i - 1] = tmp;
	}

	return str1;
}