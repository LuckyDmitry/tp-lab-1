#include "task5.h"
#include <iostream>


int main()
{
   	char *buf="123,456,789";
   	int N=0;
   	char **result=nullptr;
   	split(&result, &N, buf, ',');
   	std::cout<<result;
    return 0;
}
