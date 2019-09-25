//
// Created by Илья Соловьёв on 25/09/2019.
//
#include <math.h>

bool checkPrime(unsigned int value) {
    if (value == 1) { return 0; }
    for (int i = 2; i <= floor(sqrt(value)); i++) {
        if (value % i == 0) { return 0; }
    }
    return 1;
}

unsigned long long nPrime(unsigned n) {
    int size = n; // число элементов для массива чисел для просеивания
    int *primes = new int[n]; // массив простых чисел
    int *numbers = new int[size]; // массив для чисел

    for (int i = 0; i < size; i++)
        numbers[i] = i; // заполняем массив (число равно индексу элемента)

    primes[0] = 2; // первое простое число - 2
    int i = 0; // индекс текущего простого числа

    while (i < n) {
        int p = primes[i++]; // запоминаем текущее простое число

        for (int j = p * 2; j < size; j += p)
            numbers[j] = 0; // обнуляем все кратные ему числа в массиве

        while (numbers[p + 1] == 0)
            p++; // ищем следующее ненулевое число

        if (p + 1 >= size) { // если выйдем за границы, расширяем массив
            int *tmp = new int[size * 2];

            for (int k = 0; k < size; k++)
                tmp[k] = numbers[k];

            delete[] numbers;

            size *= 2;
            numbers = tmp;

            for (int j = size / 2; j < size; j++)
                numbers[j] = j; // заполняем новую часть массива числами

            i = 0; // возвращаемся к начальной стадии просеивания
        } else
            primes[i] = p + 1; // запоминаем новое простое число
    }

    return primes[n - 1];

}

unsigned long long nextPrime(unsigned long long value) {

    value++;
    while (!checkPrime(value)) {
        value++;
    }
    return value;
}