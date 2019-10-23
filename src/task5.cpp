#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "task5.h"


void split(char ***result, int *N, char *buf, char ch)
{
	int i = 0,j=0,k=0;
	unsigned long int buflen = strlen(buf);
	char* sbuf = (char*)malloc(buflen * sizeof(char));
	sbuf[buflen] = '\0';
	for (i = 0; i < buflen; i++)
		if(buf[i]==ch)
			(*N)++;
	(*N)++;
	*result = (char**)malloc((*N) * sizeof(char*));
	for (i = 0; i < buflen+1; i++)
	{
		if ((buf[i]==ch) || (buf[i]=='\0'))
		{
			sbuf[j] = '\0';
			*(*result + k) = sbuf;
			k++;
			sbuf = new char[buflen];
			j = 0;
		}
		else
		{
			sbuf[j] = buf[i];
			j++;
		}
	}
}