#include "task4.h"
#include <string.h>

char* sum(char *x, char *y) 
{
	int lenX = strlen(x);
	int lenY = strlen(y);
	int max = 0,
		remainder = 0;
	if (lenX > lenY)
		max = lenX;
	else
		max = lenY;
	char *sum = new char[max];
	char numX, numY;
	char *amount;
	lenX--;
	lenY--;
	int num = 0;
	for (int i = max - 1; i >= 0; i--, lenX--, lenY--) 
	{
		if (lenX >= 0)
			numX = x[lenX];
		else
			numX = '0';
		if (lenY >= 0)
			numY = y[lenY];
		else
			numY = '0';
		
		sum[i] = ((((numX + numY) - 2*'0') + remainder)%10) + '0';
		remainder = (((numX + numY) - 2*'0') + remainder) / 10;
	}
	
	if (remainder) //если длинна суммы +1 в сравнении с max
	{
		amount = new char[max + 2];

		for (int i = max; i > 0; i--) 
		{
			amount[i] = sum[i - 1];
		}
		amount[0] = '1';
		amount[max + 1] = '\0';
	}
	else              //если длинна суммы не изменилась
	{
		amount = new char[max + 1];
		for (int i = 0; i < max; i++) {
			amount[i] = sum[i];
		}
		amount[max] = '\0';
	}
	return amount;
}

	
