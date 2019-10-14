#include <iostream>
#include <string.h>
using namespace std;

void split(char ***result, int *N, char *buf, char ch)
{
	int num_str = 0, num_let = 0;
	while (*(buf + num_let) != '\0')
	{
		if (*(buf + num_let) == ch)
			(*N)++;
		num_let++;
	}
	(*N)++;
	num_let = 0;
	*result = new char*[*N];
	char *str = new char[strlen(buf)];
	for (int j = 0; j <= strlen(buf); j++)
	{
		if ((buf[j] != ch) && (buf[j] != '\0'))
		{
			str[num_let] = buf[j];
			num_let++;
		}
		if ((buf[j] == ch) || (buf[j] == '\0'))
		{
			str[num_let] = '\0';
			(*result)[num_str] = str;
			num_str++;
			num_let = '\0';
			str = new char[strlen(buf)];
		}
	}
}
