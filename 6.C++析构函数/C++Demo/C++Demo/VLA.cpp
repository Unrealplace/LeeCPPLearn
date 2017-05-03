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
    const int m_len; //数组长度
    int * m_arr; //数组指针
    int * m_p; //指向数组第i个元素的指针
private:
    int * at(int i);//获取第i个元素的指针;
public:
    VLA(int len);  // 构造函数和析构函数
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

//析构函数的执行时机
//析构函数在对象被销毁时调用，而对象的销毁时机与它所在的内存区域有关。不了解内存分区的读者请阅读《C语言和内存》专题。
//
//在所有函数之外创建的对象是全局对象，它和全局变量类似，位于内存分区中的全局数据区，程序在结束执行时会调用这些对象的析构函数。
//
//在函数内部创建的对象是局部对象，它和局部变量类似，位于栈区，函数执行结束时会调用这些对象的析构函数。
//
//new 创建的对象位于堆区，通过 delete 删除时才会调用析构函数；如果没有 delete，析构函数就不会被执行。
inline VLA::~VLA(){
    cout << "dealloc" <<endl;
    
    delete [] m_arr; // 释放内存
}

inline int * VLA::at(int i){

    if (!m_arr || i <0 || i>= m_len) {
        return NULL;
    }else{
        return m_arr+i;
    }
}
inline void VLA::show(){

    for (int i = 0; (m_p = at(i)) ; i++) {
        if (i == m_len -1) {
            cout << *at(i) <<endl;
        }else{
            cout << *at(i) <<","<<endl;
        }
    }
}
inline void VLA::input(){

    for(int i=0; (m_p=at(i)); i++){ cin>>*at(i); }
}
