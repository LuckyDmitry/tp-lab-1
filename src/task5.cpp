#define _CRT_SECURE_NO_WARNINGS

#include "task2.h"
#include <cstring>
#include <cstdlib>

void split(char*** result, int* N, char* buf, char ch) {
	int lenOfBuf = strlen(buf), position = 0, firstSymbolOfSubstr = 0;
	int *substrStarts = NULL, *substrLengths = NULL;
	*N = 0;
	substrStarts = (int*)malloc(sizeof(int) * lenOfBuf / 2 + 1);
	substrLengths = (int*)malloc(sizeof(int) * lenOfBuf / 2 + 1);
	for (int position = 0; position <= lenOfBuf; position++) {
		if (buf[position] == ch || buf[position] == '\0') {
			if (position > firstSymbolOfSubstr) {
				substrStarts[*N] = firstSymbolOfSubstr;
				substrLengths[*N] = position - firstSymbolOfSubstr;
				(*N)++;
			}
			firstSymbolOfSubstr = position + 1;
		}
	}
	*result = new char* [*N];
	for (int i = 0; i < *N; i++) {
		(*result)[i] = new char [substrLengths[i]];
		for (int copy = 0; copy < substrLengths[i]; copy++) {
			(*result)[i][copy] = *(buf + substrStarts[i] + copy);
		}
		(*result)[i][substrLengths[i]] = '\0';
	}
	free(substrStarts);
	free(substrLengths);
}