//
//  ObjectClass.hpp
//  C++Demo
//
//  Created by MacBook on 2017/5/9.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#ifndef ObjectClass_hpp
#define ObjectClass_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

//类其实也是一种数据类型，也可以发生数据类型转换，不过这种转换只有在基类和派生类之间才有意义，并且只能将派生类赋值给基类，包括将派生类对象赋值给基类对象、将派生类指针赋值给基类指针、将派生类引用赋值给基类引用，这在 C++ 中称为向上转型（Upcasting）。相应地，将基类赋值给派生类称为向下转型（Downcasting）。
//
//向上转型非常安全，可以由编译器自动完成；向下转型有风险，需要程序员手动干预。本节只介绍向上转型，向下转型将在后续章节介绍。

class A{

public:
    A(int a):m_a(a){}
public:
    void display(){
     cout<<"Class A: m_a="<<m_a<<endl;
    }
public:
    int m_a;
    
};

class B:public A{

public:
    B(int a ,int b):A(a),m_b(b){}
public:
    int m_b;
public:
    void display(){
    
        cout<<"Class B: m_a="<<m_a<<", m_b="<<m_b<<endl;
    }
};




#endif /* ObjectClass_hpp */
