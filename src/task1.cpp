#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max)
{
	bool find = false;
	unsigned long num = 1;

	while (!find) {
		for (int i = min; i <= max; i++)
		{
			if (num % i != 0)
			{
				break;
			}
			else
			{
				if (i == max) 
					find = true;
			}

		}
		if (!find) 
		num++;
	}
	return num;
}