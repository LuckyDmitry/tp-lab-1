//
//  task3.cpp
//  lab
//
//  Created by Коля on 09/10/2019.
//  Copyright © 2019 Коля. All rights reserved.
//

#include "task3.h"
#include "task2.h"
#include <thread>


void realSumPrime (unsigned int hdbound, std::promise<unsigned long long> && p, unsigned int start)
{
    unsigned long long sum = 0;
    for (unsigned int i = start;i < hdbound;i++)
    {
        if (checkPrime(i))sum += i;
    }
    p.set_value(sum);
}

unsigned long long sumPrime(unsigned int hbound)
{
    int b = hbound/4;
    std::promise <unsigned long long> ans1, ans2, ans3, ans4;
    auto f1 = ans1.get_future(), f2 = ans2.get_future(), f3 = ans3.get_future(), f4 = ans4.get_future();
    std::thread t1 (&realSumPrime, b, std::move(ans1), 2);
    std::thread t2 (&realSumPrime, b+hbound/4, std::move(ans2), b);
    b+=hbound/4;
    std::thread t3 (&realSumPrime, b+hbound/4, std::move(ans3), b);
    b+=hbound/4;
    std::thread t4 (&realSumPrime, b+hbound/4, std::move(ans4), b);
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    return f1.get()+f2.get()+f3.get()+f4.get();
}
