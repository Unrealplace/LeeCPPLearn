//
//  Complex.hpp
//  C++Demo
//
//  Created by LiYang on 2017/6/6.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#ifndef Complex_hpp
#define Complex_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

//
//类型转换函数的语法格式为：
//operator type(){
//    //TODO:
//    return data;
//}
//operator 是 C++ 关键字，type 是要转换的目标类型，data 是要返回的 type 类型的数据。

class Complex{

private:
    double m_real;
    double m_imag;
public:
    Complex():m_real(0.0),m_imag(0.0){}
    Complex(double real,double imag):m_real(real),m_imag(imag){}
public:
    friend ostream & operator<<(ostream &out,Complex &c);
    friend Complex operator+(const Complex &c1,const Complex &c2);
    operator double() const{
        return m_real;
    }//类型转换函数
};

//关于类型转换函数的说明
//
//1) type 可以是内置类型、类类型以及由 typedef 定义的类型别名，任何可作为函数返回类型的类型（void 除外）都能够被支持。一般而言，不允许转换为数组或函数类型，转换为指针类型或引用类型是可以的。
//
//2) 类型转换函数一般不会更改被转换的对象，所以通常被定义为 const 成员。
//
//3) 类型转换函数可以被继承，可以是虚函数。
//
//4) 一个类虽然可以有多个类型转换函数（类似于函数重载），但是如果多个类型转换函数要转换的目标类型本身又可以相互转换（类型相近），那么有时候就会产生二义性。以 Complex 类为例，假设它有两个类型转换函数：

#endif /* Complex_hpp */
