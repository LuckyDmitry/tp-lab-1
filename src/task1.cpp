#include <iostream>

unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned long i = min;
	int flag = 0;
	while (flag == 0)
	{
		flag = 1;
		for (unsigned j = min; j <= max; j++)
			if (i%j != 0) {
				flag = 0; break;
			}
		i++;
	}
	return --i;
}