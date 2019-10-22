#include "task5.h"
#include <iostream>
#include <string.h>


void split(char ***result, int *N, char *buf, char ch)
{ 
	int step = 0;
	int count = 0;
	while (*(buf + step) != '\0')
	{
		if (*(buf + step) == ch)
		{
			(*N)++;
		}
		step++;
	}
	(*N)++;
	step = 0;
	*result = new char*[*N];
	char *s = new char[strlen(buf)];

	 
	
	for (int i = 0; i <= strlen(buf); i++)
	{
		if ((buf[i] != ch) && (buf[i] != '\0'))
		{
			*(s + count) = buf[i];
			count++;
		}
		if ((buf[i] == ch) || (buf[i] == '\0'))
		{
			*(s + count) = '\0';
			*(*result + step) = s;
			step++;
			count = 0;
			delete[] s;
			s = new char[strlen(buf)];
		}
	}
}