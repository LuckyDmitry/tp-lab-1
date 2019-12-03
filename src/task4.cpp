#include "task4.h"
#include <malloc.h>
#include <string.h>

char* sum(char* x, char* y) {
	long long len, len_x = strlen(x), len_y = strlen(y), s=0;
	if (len_x>len_y)
		len = strlen(x);
	else
		len = strlen(y);
	char *sum = new char[len];
	for (int i = 1; i <= len + 1; i++)
	{
		if (i <= len_x)
		{
			s += (*(x + (len_x - i)) - '0');
		}
		if (i <= len_y)
		{
			s += (*(y + (len_y - i)) - '0');
		}
		*(sum + len + 1 - i) = s % 10 + '0';
		s = s / 10;
	}

	*(sum + len + 1) = 0;

	if (*(sum) == '0')
	{
		for (int i = 0; i <= len; i++)
		{
			*(sum + i) = *(sum + i + 1);
		}
	}
	return sum;

}