#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned long number = max;
	bool check = 1;
	while (check)
	{
		for (unsigned long i = min; i <= max; i++)
		{
			if ((number % i) != 0)
			{
				break;
			}
			if (i == max)
			{
				return number;
			}
		}
		number++;
	}
}

