#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "task4.h"


char* sum(char* x, char* y)
{
	int a = 0;
	unsigned long int maxlen = 0, minlen=0, i = 0;
	unsigned long int xlen = strlen(x);
	unsigned long int ylen = strlen(y);
	char *maxstr, *minstr;
	if (xlen > ylen)
	{
		maxlen = xlen + 1;
		minlen = ylen;
		maxstr = x;
		minstr = y;
	}
	else
	{
		maxlen = ylen + 1;
		minlen = xlen;
		maxstr = y;
		minstr = x;
	}
	char* result = new char[maxlen];
	result[0] = '0';
	for (i = 1; i < maxlen; i++)
		result[i] = maxstr[i - 1];
	result[i] = '\0';


	for (i = 0; i < minlen; i++)
	{
		a = (result[maxlen - 1 - i])-'0';
		a = a +(minstr[minlen- 1 - i]- '0');
		result[maxlen - 1 - i] = (a % 10)+ '0';
		result[maxlen - 1 - i - 1] = (result[maxlen - 1 - i - 1]-'0') + ((a / 10)+ '0');
	}

	if (result[0] == '0')
		result = result + sizeof(char);
	return result;
}