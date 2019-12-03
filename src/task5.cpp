#include "task5.h"
#include <iostream>
#include <cstring>
using namespace std;
void split(char*** result, int* N, char* buf, char ch)
{
	int i = 0;
	while(buf[i]!='\0')
	{
		if (buf[i] == ch)
			(*N)++;
		i++;
	}
	(*N)++;

	

	*result = new char* [*N];
	char* check = new char[i];
	*(*result) = check;
	i = 0;
	int k = 1;
	while (buf[i] != '\0')
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