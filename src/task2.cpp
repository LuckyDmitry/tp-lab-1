#include "task2.h"
using namespace std;

bool checkPrime(unsigned int value)
{
	if (value == 1)
	{
		return 0;
	}
	else
	{
		for (int i = 2; i <= value; i++)
		{
			if ((value % i == 0) && (value != i))
				return 0;
		}
	}
	return 1;

}
unsigned long long nPrime(unsigned n)
{
	int i = 0;
	long long a = 2;
	if (i == n)
		return a;
	while (i<n)
	{
		
		if (checkPrime(a)==true)
		{
			i = i + 1;
		
		}
		
		a = a + 1;

	}
	return a-1;
}

unsigned long long nextPrime(unsigned long long value)
{  
	bool k = true;
	unsigned int a=value+1;
	while (k)
	{
		if (checkPrime(a) == 1)
		{
			k = false;
		}
		else
		{
			a = a + 1;
		}

	}
	return a;
}
