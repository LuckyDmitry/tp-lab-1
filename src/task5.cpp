#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
void split(char*** result, int* N, char* buf, char ch) {
	int i = 0;
	int j = 0;
	int m = 0;
	int k = 0;
	int max = 0;
	int len = strlen(buf);
	for (i = 0; i < len; i++) {
		m = m + 1;
		if (buf[i] == ch) {
			m = m - 1;
			*N = *N + 1;
			if (max<m) {
				max = m;
			}
			m = 0;
		}
	}
	*N = *N + 1;
	
	char* T = (char*)malloc((max)*sizeof(char));
	*result = (char**)malloc((*N)*(max)*sizeof(char));


		for (i = 0; i <= len; i++) {
			if ((buf[i] == ch) || (i == len)) {
				T[j] = '\0';
				*(*result + (k)) = T;;
				j = 0;
				k = k + 1;
				 T = (char*)malloc((max) * sizeof(char));
				continue;
			}
			T[j] = buf[i];
			j = j + 1;
		}


}