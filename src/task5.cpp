#include "task5.h"

void split(char*** result, int* N, char* buf, char ch)
{
	int i = 0, n = 1;
	for (; buf[i] != '\0'; i++) {
		if (buf[i] == ch)
		{
			(*N)++;
		}
	}
	(*N)++;
	char* tmp = new char[i];
	(*result) = new char* [*N];
	(*result)[0] = tmp;
	for (i = 0; buf[i] != '\0'; i++) 
	{
		tmp[i] = buf[i];
		if (buf[i] == ch) 
		{
			tmp[i] = '\0';
			(*result)[n] = tmp + i + 1;
			n++;
		}
	}
	tmp[i] = '\0';
}