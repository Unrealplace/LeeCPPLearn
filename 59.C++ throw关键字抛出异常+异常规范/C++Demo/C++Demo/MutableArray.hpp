//
//  MutableArray.hpp
//  C++Demo
//
//  Created by LiYang on 2017/6/2.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#ifndef MutableArray_hpp
#define MutableArray_hpp

#include <stdio.h>
#include <iostream>
#include "ObjectClass.hpp"

using namespace std;
class Array{
public:
    Array();
    ~Array(){
        free(m_p);
    }
private:
    int m_len;//获取数组元素
    int m_capacity;//当前的内存能容纳多少元素
    int * m_p;// 内存指针
    static const int m_stepSize = 50; //每次扩容的步长
public:
    int operator[] (int i) const;//获取数组元素
    int push(int ele);//在末尾插入数组元素
    int pop();//在末尾删除数组元素
    int length()const{
        return  m_len;
    }
    void printArray(Array& arr);
};


#endif /* MutableArray_hpp */
