#include "../include/task5.h"
#include <cstring>

void split(char*** result, int* N, char* buf, char ch) {
	int buf_len = strlen(buf);
	int i = 0;

	for (int i = 0; i < buf_len; i++) {
		if (buf[i] == ch) {
			(*N)++;
		}
	}

	(*N)++; 
	*result = new char* [*N]; 
	char* word = new char[buf_len]; 

	int j = 0;
	int k = 0;

	for (int i = 0; i < buf_len + 1; i++) {
		if ((buf[i] != ch) && (buf[i] != '\0')) {
			word[j] = buf[i]; 
			j++;
		}
		if ((buf[i] == ch) || (buf[i] == '\0')) {
			word[j] = '\0'; 
			*(*result + k) = word; 
			k++; 
			j = 0; 
			word = new char[buf_len]; 
		}

	}

} 
