#include "task1.h"

static unsigned long gcd(unsigned long A, unsigned long B)
{
	while (A != B)
	{
		if (A > B)
		{
			A -= B;
		}
		else
		{
			B -= A;
		}
	}
	return A;
}

static unsigned long lcm(unsigned long A, unsigned long B)
{
	return (A * B) / gcd(A, B);
}

unsigned long findValue(unsigned int min, unsigned max)
{
	if (min == 0) min++;
	unsigned long res = 1;

	for (unsigned int i = min; i < max; i++)
	{
		res = lcm(res, i);
	}

	return res;
}
