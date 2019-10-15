#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cstdlib>
#include <malloc.h>

char * sum(char *x, char *y)
{
	long int x1;
	long int y1;
	long long int S;
	long long int Stemp;
	int k = 0;
	x1 = atol(x);
	y1 = atol(y);
	S = x1 + y1;
	Stemp = S;

	while (Stemp != 0)
	{
		Stemp = Stemp / 10;
		k++;
	}

	char* sum = (char *)malloc(sizeof(char) * (k));
	sprintf(sum, "%lld", S);

	return(sum);
} 
