#include <algorithm>
#include "task5.h"

void split(char*** result, int* N, char* buf, char ch) {
	int p = 0, prevp = 0, n = 1, k = 0, i = 0;
	while (*(buf + p) != '\0') {
		if (*(buf + p) == ch) {
			n++;
		}                                      
		p++;
	}
	p = 0;
	*N = n;
	*result = (char**)malloc(n * sizeof(char*));
	while (*(buf + p) != '\0') {
		if (*(buf + p) == ch) {
			*(*(result)+k) = (char*)malloc((p - prevp) * sizeof(char));
			*(*(*(result)+k) + (p - prevp)) = '\0';
			for (i = 0; p > (prevp + i); i++) {
				*(*(*(result)+k) + i) = *(buf + prevp + i);
			}
			k++;
			prevp = p;
			prevp++;
		}
		p++;
	}
	*(*(result) + k) = (char*)malloc(((p - prevp))*sizeof(char));
	*(*(*(result) + k) + (p - prevp)) = '\0';
	for (i = 0; p > (prevp + i); i++) {
		*(*(*(result)+k) + i) = *(buf + prevp + i);
	}
}