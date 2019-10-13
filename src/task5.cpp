//
//  task5.cpp
//  lab
//
//  Created by Коля on 13/10/2019.
//  Copyright © 2019 Коля. All rights reserved.
//

#include "task5.hpp"


void split(char ***result, int *N, char *buf, char ch)
{
    *N=1;
    for (int i = 0; i < strlen(buf); i++)
        if (*(buf + i) == ch)
            (*N)++;
    *result = (char**) malloc((*N) * sizeof(char*));
    std::string word;
    std::istringstream ss((std::string(buf)));
    int counter=0;
    while (std::getline(ss, word, ch))
    {
       *(*result + counter++) = strdup(word.c_str());
    }
}
