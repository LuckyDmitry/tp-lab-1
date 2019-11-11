#include "task4.h" 
#include <string.h>
#include <malloc.h>

char * sum(char *x, char *y)
	{
		int max;
		int xlen = strlen(x);
		int ylen = strlen(y);

		if (xlen > ylen)
		{
			max = xlen;
		}
		else
		{
			max = ylen;
		}

		char *sum = (char*)malloc((max + 1) * sizeof(char));
		int s = 0;

		for (int i = 1; i <= max + 1; i++)
		{
			if (i <= xlen)
			{
				s += (*(x + (xlen - i)) - '0');
			}
			if (i <= ylen)
			{
				s += (*(y + (ylen - i)) - '0');
			}
			*(sum + max + 1 - i) = s % 10 + '0';
			s = s / 10;
		}

		*(sum + max + 1) = 0;

		if (*(sum) == '0')
		{
			for (int i = 0; i <= max; i++)
			{
				*(sum + i) = *(sum + i + 1);
			}
		}
		return sum;
}


