#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cstdlib>
#include <malloc.h>
#include <string.h>

char * sum(char *x, char *y)
{
	long int x1;
	long int y1;
	long int temp;
	x1 = atol(x);
	y1 = atol(y);
	long int sizea;
	long int sizeb;

	if (y1 > x1)
	{
		temp = x1;
		x1 = y1;
		y1 = temp;
		sizea = strlen(y);
		sizeb = strlen(x);
	}

	else
	{
		sizea = strlen(x);
		sizeb = strlen(y);
	}

	long int length;


	int *mas1 = (int *)malloc(sizeof(int)*sizea);
	memset(mas1, 0, sizea);

	int *mas2 = (int *)malloc(sizeof(int)*sizeb);
	memset(mas2, 0, sizeb);

	int *res;
	int *ser;


	if (sizea > sizeb)
	{
		res = (int *)malloc(sizeof(int)*(sizea + 1));
		memset(mas2, 0, sizea + 1);
		ser = (int *)malloc(sizeof(int)*(sizea + 1));
		memset(ser, 0, sizea + 1);
	}

	else
	{
		res = (int *)malloc(sizeof(int)*(sizeb+1));
		memset(mas2, 0, sizeb);
		ser = (int *)malloc(sizeof(int)*(sizeb + 1));
		memset(ser, 0, sizeb + 1);
	}



	for (long int i = 0; i < sizea; i++)
	{
		mas1[i] = x1 % 10;
		x1 = x1 / 10;
	}

	for (long int i = 0; i < sizeb; i++)
	{
		mas2[i] = y1 % 10;
		y1 = y1 / 10;
	}

	if (sizea == sizeb)
		length = sizea + 1;

	else
	{
		length = sizea;
	}

	if (sizea != sizeb)  
	{
		
		for (long int i = 0; i < length; i++)
		{
			if (i <= sizeb - 1)
			{
				mas1[i] += mas2[i];
				mas1[i + 1] += (mas1[i] / 10);
				mas1[i] %= 10;
			}
			else if ((0 > mas1[i]) || (mas1[i] > 9))

				mas1[i] = 0;
		}

		for (long int i = 0; i < length; i++)
		{
			res[i] = mas1[i];
		}
	}

	else
	{
		for (long int i = 0; i < length; i++)
		{
			
			if (i < length - 2)
			{
				mas1[i] += mas2[i];
				mas1[i + 1] += (mas1[i] / 10);
				mas1[i] %= 10;
				res[i] = mas1[i];
			}
			else if (i == (length - 2))
			{
				mas1[i] += mas2[i];
				res[i] = mas1[i] % 10;
				res[i + 1] = mas1[i] / 10;
			}
		}
	}


	for (long int i = length; i >= 0; i--)
	{
		if ((res[i] == 0) || ((0 > res[i]) || (res[i] > 9)))
			length--;
		else
			break;
	}
	

	long int j = length - 1;

	for (long int i = 0; i < length; i++)
	{
		ser[i] = res[j];
		j--;
	}


	char* sum = (char *)malloc(sizeof(char) * (length));
	memset(sum, 0, sizeof(char) * (length));
	
	for (long int i = 0; i < length; i++)
	{
		sprintf(sum+i, "%d", ser[i]);
	}

	return(sum);
}
