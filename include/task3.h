//
//  task3.hpp
//  lab
//
//  Created by Коля on 09/10/2019.
//  Copyright © 2019 Коля. All rights reserved.
//

#ifndef task3_hpp
#define task3_hpp

#include <stdio.h>
#include <future>
void realSumPrime (unsigned int hdbound, std::promise<unsigned long long> && p, unsigned int start);
unsigned long long sumPrime(unsigned int hbound);

#endif /* task3_hpp */
