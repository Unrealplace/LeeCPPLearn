//
//  ObjectClass.hpp
//  C++Demo
//
//  Created by MacBook on 2017/5/25.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#ifndef ObjectClass_hpp
#define ObjectClass_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class complex{

public:
    complex(double real=0.0,double imag =0.0):m_real(real),m_imag(imag){};
    
private:
    double m_real;
    double m_imag;
    
public:
    friend complex operator+(const complex &A,const complex &B);
    friend complex operator-(const complex &A,const complex &B);
    friend complex operator*(const complex &A,const complex &B);
    friend complex operator/(const complex &A,const complex &B);
    friend istream & operator>>(istream & in,complex &A);
    friend ostream & operator<<(ostream & out, complex & A);
    
};

//重载输入运算符
inline istream & operator>>(istream & in, complex & A){
    in >> A.m_real >> A.m_imag;
    return in;
}
//重载输出运算符
inline ostream & operator<<(ostream & out, complex & A){
    out << A.m_real <<" + "<< A.m_imag <<" i ";;
    return out;
}

#endif /* ObjectClass_hpp */
