//
//  ObjectClass.hpp
//  C++Demo
//
//  Created by LiYang on 2017/6/5.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#ifndef ObjectClass_hpp
#define ObjectClass_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Array{
    
private:
    int m_len;
    int *m_p;
public:
    Array(int len);
    Array(const Array &arr);
    ~Array();
public:
    int operator[](int i)const{
        return m_p[i];////获取元素（读取）
    }
    int & operator[](int i){
        return m_p[i];////获取元素（写入）返回内存空间的引用 再赋值
    }
    Array &operator = (const Array & arr);//
    //5) 赋值运算符重载函数除了能有对象引用这样的参数之外，也能有其它参数。但是其它参数必须给出默认值，例如：
//    Array & operator=(const Array &arr, int a = 100);
    int length()const{
        return m_len;
    }
    
};

#endif /* ObjectClass_hpp */
