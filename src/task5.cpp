#include <string.h>
#include <stdlib.h>
void split(char ***result, int *N, char *buf, char ch) {
	*(N) = 0;
	char *it = buf;
	char *part = (char*)malloc(1000*sizeof(char));
	int y = 0;
	int nn = 0;
	while (*(it) != '\0') {
		if (*(it) == ch) {
			nn=nn+1;
		}
		it++;
	}
	it = buf;
	nn++;
	*(result) = (char**)malloc(nn * sizeof(char*));
	int n = 0;
	int part_i = 0;
	int empty = 1;
	while (*(it) != '\0') {
		if (*(it) == ch) {
			*(part + part_i) = '\0';
			part_i = 0;
			*(*(result)+n) = (char*)malloc(1000);
			strcpy(*(*(result)+n), part);
			empty = 1;
			n++;
		}
		else {
			*(part + part_i) = *(it);
			part_i++;
			empty = 0;
		}
		it++;
	}
	if (empty) {
		*(part + part_i) = '\0';
		*(*(result)+n) = (char*)malloc(1000);
		strcpy(*(*(result)+n), part);
	}
	*(N) = nn;
}
