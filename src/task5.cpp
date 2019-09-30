#include <iostream>
using namespace std;
void split(char ***result, int *N, char *buf, char ch)
{
	int q = 0, k = 0;
	while (*(buf + q) != '\0')
	{
		if (*(buf + q) == ch)
			(*N)++;
		q++;
	}
	(*N)++;
	q = 0;
	*result = new char*[*N];
	int l = strlen(buf);
	char *s = new char[l];
	for (int j = 0; j <= strlen(buf); j++)
	{
		if ((buf[j] != ch) && (buf[j] != '\0'))
		{
			*(s + k) = buf[j];
			k++;
		}
		if ((buf[j] == ch) || (buf[j] == '\0'))
		{
			*(s + k) = '\0';
			*(*result + q) = s;
			q++;
			k = 0;
			s = new char[l];
		}
	}
}