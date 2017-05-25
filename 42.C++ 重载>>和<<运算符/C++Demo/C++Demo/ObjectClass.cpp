//
//  ObjectClass.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/25.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include "ObjectClass.hpp"
//重载加法运算符
complex operator+(const complex &A,const complex &B){

    complex C;
    C.m_real = A.m_real + B.m_real;
    C.m_imag = A.m_imag + B.m_imag;
    return C;
    
}
//重载减法运算符
complex operator-(const complex & A, const complex &B){
    complex C;
    C.m_real = A.m_real - B.m_real;
    C.m_imag = A.m_imag - B.m_imag;
    return C;
}
//重载乘法运算符
complex operator*(const complex &A,const complex &B){

    complex C;
    C.m_real = A.m_real * B.m_real -A.m_imag * B.m_imag;
    C.m_imag = A.m_imag * B.m_real +A.m_real * B.m_imag;
    return C;
}
//重载除法运算符
complex operator/(const complex & A, const complex & B){
    complex C;
    double square = A.m_real * A.m_real + A.m_imag * A.m_imag;
    C.m_real = (A.m_real * B.m_real + A.m_imag * B.m_imag)/square;
    C.m_imag = (A.m_imag * B.m_real - A.m_real * B.m_imag)/square;
    return C;
}





