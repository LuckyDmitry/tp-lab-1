#pragma once
#include <iostream> // библиотека дл€ ввода в консоль 
#include <math.h> // библиотека отвечающа€ за математические операции 
#include <ctime> // дл€ корректной работы функций srand & rand
#include <cstring> // строковый тип 
using namespace std; // "ѕространство имен", чтобы не использовать это перед cout & endl каждый раз, например 

void split(char ***result, int *N, char *buf, char ch);