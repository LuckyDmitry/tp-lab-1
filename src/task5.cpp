#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include "task5.h"
using namespace std;

void split(char ***result, int *N, char *buf, char ch) {
	int len = strlen(buf);

	for (int i = 0; i < len; i++) {
		if (buf[i] == ch) (*N)++;
	}
	(*N)++;

	*result = new char*[*N];
	char *next = new char[len];

	int k = 0;
	int l = 0;

	for (int i = 0; i <= len; i++) {
		if (buf[i] != ch && buf[i] != '\0') 
		{
			next[k] = buf[i];
			k++;
		}

		if ((buf[i] == ch) || (buf[i] == '\0'))
		{
			next[k] = '\0';
			*(*result + l) = next;
			l++;
			k = 0;
			next = new char[len];
		}

	}
}