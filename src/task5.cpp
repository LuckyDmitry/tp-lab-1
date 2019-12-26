#include "task5.h"

void split(char*** result, int* N, char* buf, char ch) {
	int start = -1, end;
	unsigned int lenght = strlen(buf);
	int count = 0, size = 0;
	//count separators
	for (int i = 0; i < lenght; i++) {
		if (buf[i] == ch)
			count++;
	}	
	count++;
	char** res = new char*[count];
	int j = 0;
	//separate on strings
	for (int i = 0; i < lenght; i++) {
		if (buf[i] == ch || i == lenght - 1) {
			end = i;
			if (i == lenght - 1 && buf[i] != ch)
				end++;
			size = (end - 1) - (start + 1) + 2;
			res[j] = new char[size];
			//forming string
			for (int k = 0; k < size-1; k++) {
				res[j][k] = buf[k + start+1];
			}
			//end of string
			res[j][size - 1] = '\0';
			j++;
			//empty string
			start = end;
		}
		
		//end of buf
		if (i == lenght - 1 && buf[i] == ch) {
			res[j] = new char[1];
			res[j][0] = '\0';
		}
	}
	*(N) = count;
	*(result) = res;
}
