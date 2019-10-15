#include "task1.h"

unsigned long findValue(unsigned int min, unsigned int max) 
{
	unsigned long result = 0;
	bool flag = 1;

	while (1) 
	{
		flag = 1;
		result++;
		for (int i = min; i < max + 1; i++) 
		{
			if (result % i != 0) 
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	
	return result;
}