#pragma once
#include <iostream> // библиотека дл€ ввода в консоль 
#include <math.h> // библиотека отвечающа€ за математические операции 
#include <ctime> // дл€ корректной работы функций srand & rand
#include <cstring> // строковый тип 
using namespace std; // "ѕространство имен", чтобы не использовать это перед cout & endl каждый раз, например 

bool checkPrime(unsigned int value);
unsigned long long nPrime(unsigned n);
unsigned long long nextPrime(unsigned long long value);