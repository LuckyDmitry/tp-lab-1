#include <string.h>
#include "task5.h"

void split(char*** result, int* N, char* buf, char ch) {
	int lenBuf = strlen(buf);
	int i = 0;

	for ( i = 0; i < lenBuf; i++) {
		if (buf[i] == ch) {
			(*N)++;
		}
	}

	(*N)++;
	*result = new char* [*N];
	char* word = new char[lenBuf];

	int j = 0;
	int k = 0;

	for (int i = 0; i < lenBuf + 1; i++) {

		if ((buf[i] != ch) && (buf[i] != '\0')) {

			word[j] = buf[i];
			j++;

		}

		if ((buf[i] == ch) || (buf[i] == '\0')) {

			word[j] = '\0';

			*(*result + k) = word;
			k++;
			j = 0;
			word = new char[lenBuf];
		}

	}

}