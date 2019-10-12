//
// Created by artem on 08.10.2019.
//

#include "task5.h"
#include <iostream>

int main()
{

    char *buf="123,456,789";
    int N=0;
    char **result=nullptr;
    split(&result, &N, buf, ',');

    std::cout << N;

    for (int i = 0; i < N; i++)
            std::cout << result[i] << "\n";

    return 0;
}

