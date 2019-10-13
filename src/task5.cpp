#include "task5.h"
#include <list>

void split(char ***result, int *N, char *buf, char ch)
{
	int quantity = 0;
	int len = 0;
	int currentLen = 0;

	std::list <int>index;
	index.push_back(0);

	for (int i = 0; *(buf + i) != 0; i++)
	{
		if (*(buf + i) == ch)
		{
			quantity++;
			if (currentLen > len) len = currentLen;
			currentLen = 0;
			index.push_back(i+1);
		}
		else
		{
			currentLen++;
		}
	}

	quantity++;

	*N = quantity;

	char ** resBuffer = new char*[quantity];

	for (int i = 0; i < quantity; i++)
	{
		resBuffer[i] = new char[len + 2];
		int j = 0;
		int k = index.front();
		index.pop_front();

		while ((*(buf + k) != ch) && (*(buf + k) != 0))
		{
			resBuffer[i][j] = buf[k];
			j++;
			k++;
		}
		resBuffer[i][j] = 0;
	}
	*(result) = resBuffer;
}