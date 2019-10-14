
#include "task4.h"
#include <string.h>
#include <malloc.h>
char* sum(char* x, char* y)
{
	int xlen = strlen(x);

	int ylen = strlen(y);

	int len;
	if (xlen > ylen) {
		len = xlen ;
	}
	else {
		len = ylen;

	}
	char* sum = (char*)malloc((len + 1) * sizeof(char));
	int sum_place = 0;
	int i = 1;
	for (i; i <= len + 1; i++)
	{
		if (i <= xlen) {
			sum_place += (*(x + (xlen - i)) - '0');
		}
		if (i <= ylen) {
			sum_place += (*(y + (ylen - i)) - '0');
		}

		*(sum + len + 1 - i) = sum_place % 10 + '0';

		sum_place = sum_place / 10;
	}

	*(sum + len + 1) = 0;

	if (*(sum) == '0')
	{
		for (i = 0; i <= len; i++)
		{
			*(sum + i) = *(sum + i + 1);
		}
	}
	return sum;

}