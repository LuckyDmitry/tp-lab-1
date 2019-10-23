#include <stdio.h>
#include "task2.h"

using namespace std;

int main(int argc, const char * argv[]) 
	{
		int a = 10;
		if (checkPrime(a))
		{
			printf("Prime\n");
		}
		else
		{
			printf("Not prime\n");
		}

		printf("Next prime - %llu\n", nextPrime(a));
		printf("%uth prime is %llu\n", a, nPrime(a));
		return 0;
	}