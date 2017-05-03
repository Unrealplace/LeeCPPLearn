//
//  LeeDemo1.cpp
//  LeeCPPDemo
//
//  Created by MacBook on 2017/4/28.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include "LeeDemo1.hpp"
#include <iostream>
using namespace std;

int _Global_count;

int testDemo1(int m, char * n){

    int k = int(*n);
    std::cout << "ggg"<< endl;
    
    return m * k ;
    
}
int testDemo2(int m,int n){

    m = m << 2;
    n = n >> 2;
    
    return m + n;
    
}

void Leeswap (int * a,int * b){

    int temp = *a;
    *a = *b;
    *b = temp;
}
