//
//  ObjectClass1.hpp
//  C++Demo
//
//  Created by MacBook on 2017/5/9.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#ifndef ObjectClass1_hpp
#define ObjectClass1_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

//派生类指针赋值给基类指针
//除了可以将派生类对象赋值给基类对象（对象变量之间的赋值），还可以将派生类指针赋值给基类指针（对象指针之间的赋值）。我们先来看一个多继承的例子，继承关系为：

class A{

public:
    A(int a):m_a(a){};
public:
    void display(){
    
        cout<<"Class A: m_a="<<m_a<<endl;
    }
protected:
    int m_a;
    
};

//中间派生类B
class B: public A{
public:
    B(int a, int b):A(a),m_b(b){}
public:
    void display(){
        cout<<"Class B: m_a="<<m_a<<", m_b="<<m_b<<endl;
    }
protected:
    int m_b;
};

//基类C
class C{
public:
    C(int c):m_c(c){}
public:
    void display(){
        cout<<"Class C: m_c="<<m_c<<endl;
    }
protected:
    int m_c;
};

//最终派生类D
class D: public B, public C{
public:
    D(int a, int b, int c, int d):B(a,b),C(c),m_d(d){};
public:
    void display(){
    cout<<"Class D: m_a="<<m_a<<", m_b="<<m_b<<", m_c="<<m_c<<", m_d="<<m_d<<endl;
    }
private:
    int m_d;
};



#endif /* ObjectClass1_hpp */
