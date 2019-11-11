#include "task5.h"

void split(char ***result, int *N, char *buf, char ch) 
{
	int lenBuf = strlen(buf);
	int numOfStr = 1;
	for (int i = 0; i < lenBuf; i++) 
	{
		if (buf[i] == ch) 
		{
			(*N)++;
		}
	}
	(*N)++;
	
	*result = (char **)malloc((*N) * sizeof(char *));
	char *str = (char *)malloc((lenBuf + 1) * sizeof(char));
	for (int i = 0; i < lenBuf; i++) 
	{
		str[i] = buf[i];
	}
	str[lenBuf] = '\0';
	*(*result) = str;


	for (int i = 0; i < lenBuf; i++) {
		if (str[i] == ch) {
			str[i] = '\0';
			*(*result + numOfStr) = str + i + 1;
			numOfStr++;
		}
	}
}