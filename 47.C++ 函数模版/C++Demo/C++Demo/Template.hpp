//
//  Template.hpp
//  C++Demo
//
//  Created by LiYang on 2017/6/1.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#ifndef Template_hpp
#define Template_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

template<typename T>void Swap(T * a,T*b){

    T temp = *a;
    *a = *b;
    *b = temp;
    
}

#endif /* Template_hpp */
