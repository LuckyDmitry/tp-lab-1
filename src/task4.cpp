#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char * sum(char *x, char *y)
{
	long int x1;
	long int S;
	long int Stemp;
	long int y1;
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
	sprintf(sum, "%ld", S);

	return(sum);
} 
