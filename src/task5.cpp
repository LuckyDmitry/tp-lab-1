#include "task5.h"
#include <iostream>
using namespace std;
void split(char*** result, int* N, char* buf, char ch)
{
	int i = 0;
	while(bif[i]!='\0')
	{
		if (buf[i] == ch)
			(*N)++;
		i++;
	}
	(*N)++;

	i = 0;

	*result = new char* [*N];
	char* check = new char[n];
	*(*result) = check;

	int k = 1;
	while (bif[i] != '\0')
	{
		check[i] = buf[i];
		if (buf[i] == ch)
		{
			*(*result + k) = check + i + 1;
			k++;
			check[i] = '\0';

		}
		i++;
		
	}
	check[i] = '\0';



}