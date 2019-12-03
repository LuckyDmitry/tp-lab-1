#include "task1.h"
using namespace std;

unsigned long findValue(unsigned int min, unsigned max)
{
	long a = max;
	int count=0;
	while (count < max - min + 1)
	{
		for (int i = min; i <= max; i++)
		{
			if (a % i == 0)
			{
				count = count + 1;

			}
			else
			{
				count = 0;
				a = a + 1;
				break;
			}

		}
	}
	return a;
}