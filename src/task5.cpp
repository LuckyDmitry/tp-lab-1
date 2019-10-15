#include <cstring>
#include "task5.h"


void split(char*** result, int* N, char* buf, char ch)
{
	int len = strlen(buf);
	for (int i = 0; i < len; i++){
		if (buf[i] == ch){
			(*N)++;
		}
	}
	*result = new char* [*N];
	char* temp_str = new char[len];
	int cnt = 0;
	int substr = 0;
	for (int i = 0; i < len+1; i++) {
		if ((buf[i] != ch) && (buf[i] != '\0')) {
			temp_str[cnt] = buf[i];
			cnt++;
		}
		if ((buf[i] == ch) || (buf[i] == '\0')) {
			temp_str[cnt] = '\0';
			*(*result + substr) = temp_str;
			temp_str = new char[len];
			substr++;
			cnt = 0;
		}
	}
}