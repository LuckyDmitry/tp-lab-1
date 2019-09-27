#include "task4.h"
<<<<<<< HEAD
#include <stdio.h>
=======
>>>>>>> 44520c5ab17219adef231a60c09e2dd6c936efb9
char *sum(char *x, char *y){
	if (!x || !y){
		return 0;
	}
	char *i = x;
	char *j = y;
	auto sizex = 0ULL;
	auto sizey = 0ULL;
	auto sizeres = 0ULL;
	while (*(i) != '\0'){
		i++;
		sizex++;
	}
	while (*(j) != '\0'){
		j++;
		sizey++;
	}
	i--;
	j--;
	char * result;
	if (sizex > sizey){
		sizeres = sizex;
	}
	else{
		sizeres = sizey;
	}
	result = (char*)malloc(sizeres + 1);
	char* ires = result + sizeres;
	int inc = 0;
	int s = 0;
	while (i != x-1 && j != y-1){
		s = (*(i)-'0') + (*(j)-'0');
		if (inc == 1){
			inc = 0;
			s += 1;
		}
		if (s >= 10){
			s -= 10;
			inc = 1;
		}
		*(ires) = s + '0';
		i--;
		j--;
		ires--;
	}
	while (i != x - 1){		
		*(ires) = *(i);
		i--;
		ires--;
	}
	while (j != y - 1){
		*(ires) = *(j)+'0';
		j--;
		ires--;
	}
	if (inc == 1){
<<<<<<< HEAD
		*(ires) = '1';
	{
=======
		*(ires) = 1;
	
>>>>>>> 44520c5ab17219adef231a60c09e2dd6c936efb9
	else{
		result=result+1;
	}
	return result;
}
