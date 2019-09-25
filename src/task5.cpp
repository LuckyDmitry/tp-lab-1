#include <iostream>
#include <string>
#include <algorithm>
#include "task5.h"

using namespace std;

void split(char ***result, int *N, char *buf, char ch)
{
	int i = 0, start = 0, n=0, size=0;
	while (i < strlen(buf))
	{
		if (i != 0 && buf[i] == ch && i + 1 != strlen(buf))
			size++;
		i++;
	}
	*result = new char*[size];
	i = 0;
	while (i < strlen(buf))
	{
		while (buf[i] != ch && i < strlen(buf))
		{
			i++;
		}
		char * x = new char[i-start+1];
		for (int j = start; j < i; j++)
			x[j - start] = buf[j];
		x[i - start] = '\0';
		result[0][n] = new char[i - start + 1];
		i++;
		start = i;
		result[0][n++] = x;
	}
	*N = n;
}