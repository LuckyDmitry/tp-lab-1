#include "task5.h"
#include <iostream>
using namespace std;
void split(char*** result, int* N, char* buf, char ch)
{
	int n = strlen(buf);
	for (int i = 0; i < n; i++)
	{
		if (buf[i] == ch)
			(*N)++;
	}
	(*N)++;



	*result = new char* [*N];
	char* check = new char[n];
	*(*result) = check;

	int k = 1;
	for (int i = 0; i < n; i++)
	{
		check[i] = buf[i];
		if (buf[i] == ch)
		{
			*(*result + k) = check + i + 1;
			k++;
			check[i] = '\0';

		}
		if (i == n - 1) check[i + 1] = '\0';
	}



}