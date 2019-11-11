#include "task1.h"

unsigned long findValue(unsigned int min, unsigned int max)
{
	unsigned long num = min;
	for (int i = min; i <= max; i++)
	{
		if (num % i != 0)
		{
			for (int j = 2; j <= i; j++)
			{
				if ((num * j) % i == 0)
				{
					num *= j;
					break;
				}
			}
		}
	}
	return num;
}