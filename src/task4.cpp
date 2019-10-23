#include "task4.h"

char * sum(char *x, char *y)
{
	int maxlength = 0;
	if (strlen(x) > strlen(y))
	{
		maxlength = strlen(x) + 1;
	}
	else
	{
		maxlength = strlen(y) + 1;
	}
	int *a;
	int *b;
	char *ans;

	a = new int[maxlength];
	b = new int[maxlength];
	ans = new char[maxlength];

	for (int i = 0; i < maxlength; i++)
	{
		if (i<strlen(x))
		a[i] = x[strlen(x)-i-1]-48;
		else a[i] = 0;
		if (i < strlen(y))
		b[i] = y[strlen(y) - i - 1] - 48;
		else b[i] = 0;
	}

	for (int i = 0; i < maxlength; i++)
	{
		a[i] += b[i];
		a[i + 1] += (a[i] / 10);
		a[i] %= 10;
	}

	for (int i = 0; i < maxlength; i++)
	{
		ans[i] = a[maxlength - 1 - i] + 48;
	}
	ans[maxlength] = '\0';
	delete[] a;
	delete[] b;

	if (ans[0] == '0')
		ans = ans+1;
	return ans;
}