#include "task1.h"
 
unsigned long findValue(unsigned int min, unsigned max)
{
	int c = 0;
	int i = 1;
	while (true)
	{
		for (int j=min;j<=max;j++)
		{
			if (i%j != 0)
			{
				c++;
			}
		}
		if (c == 0)
		{
			return i;
		}
		i++;
		c = 0;
	}
}