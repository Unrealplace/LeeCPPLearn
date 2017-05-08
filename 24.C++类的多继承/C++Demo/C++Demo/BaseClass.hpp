//
//  BaseClass.hpp
//  C++Demo
//
//  Created by MacBook on 2017/5/8.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#ifndef BaseClass_hpp
#define BaseClass_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class BaseA{

public:
    BaseA(int a,int b);
    ~BaseA();
protected:
    int m_a;
    int m_b;
    
public:
    void show();
    
    
};

class BaseB{

public:
    BaseB(int c, int d);
    ~BaseB();
protected:
    int m_c;
    int m_d;
public:
    void show();
    
};

class Derived:public BaseA,public BaseB{


public:
    Derived(int a, int b, int c, int d, int e);
    ~Derived();
public:
    void display();
private:
    int m_e;
    
};

#endif /* BaseClass_hpp */
