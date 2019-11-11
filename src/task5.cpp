#include "task5.h"
#include <cstring>

void split(char*** result, int* N, char* buf, char ch)
{
	int colSep = 0;
	char* newBuf = new char[strlen(buf)+1];
	for (int i = 0; i < strlen(buf); i++)
	{
		newBuf[i] = buf[i];
		if (buf[i] == ch)
			colSep++;
	}
	newBuf[strlen(buf)] = '\0';
	char** res = new char* [colSep + 1];

	res[0] = newBuf;
	int j = 1;
	for (int i = 0; i < strlen(buf); i++)
	{
		if (buf[i] == ch)
		{
			newBuf[i] = '\0';
			if (i != strlen(buf)-1)
			{
				res[j] = &newBuf[i + 1];
				j++;
			}
		}
	}
	*result = res;
	*N = colSep + 1;
}