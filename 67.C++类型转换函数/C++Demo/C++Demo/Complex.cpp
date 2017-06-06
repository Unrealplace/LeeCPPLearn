//
//  Complex.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/6.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include "Complex.hpp"
//重载>>运算符
ostream & operator<<(ostream &out, Complex &c){
    out << c.m_real <<" + "<< c.m_imag <<"i";;
    return out;
}
//重载+运算符
Complex operator+(const Complex &c1, const Complex &c2){
    Complex c;
    c.m_real = c1.m_real + c2.m_real;
    c.m_imag = c1.m_imag + c2.m_imag;
    return c;
}
