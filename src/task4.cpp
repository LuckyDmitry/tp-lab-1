#include "task4.h"
#include <cstring>
char* sum(char* x, char* y)
{
	int lengx = strlen(x);
	int lengy = strlen(y);
	int max = lengx > lengy ? lengx : lengy;
	char* sum = new char[max];
	int one = 0;
	lengx--;
	lengy--;
	for (;lengx>=0 || lengy>=0; lengx--, lengy--)
	{
		int littlesum = (lengx>=0?x[lengx]:'0') + (lengy>=0? y[lengy]:'0') - 2 * '0' + one;
		sum[lengx > lengy ? lengx : lengy] = (littlesum % 10)+'0';
		one = littlesum / 10;
	}
	char* endsum;
	if (one == 1)
	{
		endsum = new char[max+2];
		for (int i = max; i > 0; i--)
		{
			endsum[i] = sum[i-1];
		}
		endsum[0] = '1';
		endsum[max + 1] = '\0';
	}
	else
	{
		endsum = new char[max + 1];
		for (int i = max-1; i >= 0; i--)
		{
			endsum[i] = sum[i];
		}
		endsum[max] = '\0';
	}
	return endsum;
}