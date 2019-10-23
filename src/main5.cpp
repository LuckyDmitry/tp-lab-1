#include <iostream>
#include "task5.h"

int main(int argc, const char * argv[]) 
{
     char **arr;
     int a = 0;
     int *n = &a;
     split(&arr, n, (char*)"zibiti", 'i');
     printf("%s", *(arr));
 }