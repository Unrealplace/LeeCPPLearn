//
//  VLA.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/3.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

//创建对象时系统会自动调用构造函数进行初始化工作，同样，销毁对象时系统也会自动调用一个函数来进行清理工作，例如释放分配的内存、关闭打开的文件等，这个函数就是析构函数。
//
//析构函数（Destructor）也是一种特殊的成员函数，没有返回值，不需要程序员显式调用（程序员也没法显式调用），而是在销毁对象时自动执行。构造函数的名字和类名相同，而析构函数的名字是在类名前面加一个~符号。
//
//注意：析构函数没有参数，不能被重载，因此一个类只能有一个析构函数。如果用户没有定义，编译器会自动生成一个默认的析构函数。

class VLA{
    
private:
    const int m_len;
    int * m_arr;
    int * m_p;
private:
    int * at(int i);//获取第i个元素的指针;
public:
    VLA(int len);
    ~VLA();
public:
    void input();
    void show();
    
};

inline VLA::VLA(int len):m_len(len){

    if (len > 0) {
        m_arr = new int[len];
    }else{
        m_arr = NULL;
    }
    
}

inline VLA::~VLA(){
    delete [] m_arr; // 释放内存
}

inline int * VLA::at(int i){

    if (!m_arr || i <0 || i>=m_len) {
        return NULL;
    }else{
        return m_arr+i;
    }
}
inline void VLA::show(){

    for (int i = 0;  (m_p = at(i)); i++) {
        if (i == m_len -1) {
            cout << *at(i)<<endl;
        }else{
            cout << *at(i)<<","<<endl;
        }
    }
}
inline void VLA::input(){

    for(int i=0; (m_p=at(i)); i++){ cin>>*at(i); }
}
