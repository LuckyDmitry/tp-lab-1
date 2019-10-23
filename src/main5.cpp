//
//  main.cpp
//  task5
//
//  Created by Андрей Журавлев on 25/09/2019.
//  Copyright © 2019 Андрей Журавлев. All rights reserved.
//

#include <iostream>
#include "task5.h"

int main(int argc, const char * argv[]) {
    char **arr;
    int a = 0;
    int *n = &a;
    split(&arr, n, (char*)"123,456,789", ',');
//    char *p = arr + 1;
    std::cout << *(arr + 3) << std::endl;
}
