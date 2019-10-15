#include <stdlib.h>



unsigned long findValue(unsigned int min, unsigned max) {
	int c = max, flag = 1;
	while (flag == 1)
	{
		flag = 0;
		for (unsigned int i = min; i < max; i++)
		{
			if (c % i != 0)
			{
				flag = 1;
			}
		}
		if (flag == 1)
		{
			c += max;
		}
	}
	return c;
}