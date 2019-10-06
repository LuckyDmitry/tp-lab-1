#include "task5.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;

void split(char ***result, int *N, char *buf, char ch) {
	int len = strlen(buf);

	for (int i = 0; i < len; i++) {
		if (buf[i] == ch)
		{
			*N++;
		}
	}
	*N++;

	*result = new char*[*N];
	char *mk = new char[len];

	int k = 0;
	int l = 0;

	for (int i=0; i < len + 1; i++) {
		if (buf[i] != ch && buf[i] != '\0') {
			mk[k] = buf[i];
			k++;
		}

		if (buf[i] == ch || buf[i] == '\0')
		{
			mk[k] = '\0';
			*(*result + l) = mk;
			l++;
			k = 0;
			mk = new char[len];
		}

	}
}


