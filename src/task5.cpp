//
//  task5.cpp
//  task5
//
//  Created by Андрей Журавлев on 25/09/2019.
//  Copyright © 2019 Андрей Журавлев. All rights reserved.
//

#include "task5.h"
#include <string>
#include <vector>
#include <iostream>
#include <string.h>
using namespace std;

void split(char ***result, int *N, char *buf, char ch) {
    string str(buf);
    vector<string> resVect;
    int end = 0;
    while (str.find(ch, end) != string::npos) {
        end = (int)str.find(ch);
        resVect.push_back(str.substr(0, end));
        str = str.substr(end + 1);
    }
    resVect.push_back(str);
    *N = (int)resVect.size();
//    result = new char**[*N];
    *result = new char*[resVect.size()];
    for (int i = 0; i < *N; i++) {
        char *temp = new char[resVect[i].size()];
        strcpy(temp, resVect[i].c_str());
        (*result)[i] = temp;
    }
//    strcpy((*result)[i], resVect[i].c_str());
    int a = 1;
    return;
}

//void split(char ***substringArray, int *n, char *buf, char separator)
//{
//   std::vector<char> *currentSubstring = new std::vector<char>();
//   std::vector<char *> *substrings = new std::vector<char *>();
//
//   for (const char *stringIterator = buf; stringIterator - buf <= (int32_t)strlen(buf); stringIterator++)
//   {
//       if ((*stringIterator == separator || *stringIterator == '\0') && currentSubstring->size() > 0)
//       {
//           uint32_t currentSubstringArrayLength = currentSubstring->size();
//           char *currentSubstringArray = new char[currentSubstringArrayLength + 1];
//           for (uint32_t i = 0; i < currentSubstringArrayLength; i++)
//               currentSubstringArray[i] = (*currentSubstring)[i];
//           currentSubstringArray[currentSubstringArrayLength] = '\0';
//
//           currentSubstring->clear();
//           substrings->push_back(currentSubstringArray);
//       }
//       else if (*stringIterator != separator)
//           currentSubstring->push_back(*stringIterator);
//   }
//
//   *n = substrings->size();
//   *substringArray = new char *[*n];
//   for (uint32_t i = 0; i < *n; i++)
//       (*substringArray)[i] = (*substrings)[i];
//
//   delete currentSubstring;
//   delete substrings;
//};
