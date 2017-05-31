//
//  Array.hpp
//  C++Demo
//
//  Created by LiYang on 2017/5/31.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Array{
public:
    Array(int length = 0);
    ~Array();
public:
    int & operator [](int i );
    const int & operator[](int i) const;
public:
    int length() const{
        return m_length;
    }
    void display() const;
private:
    int m_length;
    int * m_p;
    
};


#endif /* Array_hpp */
