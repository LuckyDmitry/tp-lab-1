//
// Created by Илья Соловьёв on 25/09/2019.
//
#include <iostream>
#include <vector>

using namespace std;

unsigned long long sumPrime(unsigned int hbound) {
    int size = hbound; // число элементов для массива чисел для просеивания
    vector<int> primes; // массив простых чисел
    int *numbers = new int[size]; // массив для чисел

    for (int i = 0; i < size; i++)
        numbers[i] = i; // заполняем массив (число равно индексу элемента)


    primes.push_back(2); // первое простое число - 2
    int i = 0; // индекс текущего простого числа

    while (primes[primes.size() - 1] < hbound) {
        int p = primes[i++]; // запоминаем текущее простое число

        for (int j = p * 2; j < size; j += p)
            numbers[j] = 0; // обнуляем все кратные ему числа в массиве

        while ((numbers[p + 1] == 0) && (p < hbound))
            p++; // ищем следующее ненулевое число

        primes.push_back(p + 1);
    }

    unsigned long long sum = 0;
    for (int i = 0; i < primes.size() - 1; i++) {
        sum += primes[i];
    }
    return sum;
}