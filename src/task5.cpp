#include "task5.h"
#include <iostream>
#include <string.h>
 

void split(char ***result, int *N, char *buf, char ch)
{
	int step = 0;
	int c = 0;
	*result = new char*[*N];
	char *s = new char[strlen(buf)];

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
	
	for (int i = 0; i <= strlen(buf); i++)
	{
		if ((buf[i] != ch) && (buf[i] != '\0'))
		{
			*(s + c) = buf[i];
			c++;
		}
		if ((buf[i] == ch) || (buf[i] == '\0'))
		{
			*(s + c) = '\0';
			*(*result + step) = s;
			step++;
			c = 0;
			s = new char[strlen(buf)];
		}
	}
}