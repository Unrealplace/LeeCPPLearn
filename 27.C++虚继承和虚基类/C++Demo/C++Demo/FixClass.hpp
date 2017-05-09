//
//  FixClass.hpp
//  C++Demo
//
//  Created by MacBook on 2017/5/9.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#ifndef FixClass_hpp
#define FixClass_hpp

#include <stdio.h>
#include <iostream>

class A {

protected:
    int m_a;
};

class B:virtual public A{

protected:
    int m_b;
};
class C:virtual public A{

protected:
    int m_c;
};
class D:public B,public C{

public:
    void seta(int a){ m_a = a; }  //正确
    void setb(int b){ m_b = b; }  //正确
    void setc(int c){ m_c = c; }  //正确
    void setd(int d){ m_d = d; }  //正确
private:
    int m_d;
    
};

#endif /* FixClass_hpp */
