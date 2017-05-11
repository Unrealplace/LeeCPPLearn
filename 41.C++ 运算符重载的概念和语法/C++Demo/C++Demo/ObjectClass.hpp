//
//  ObjectClass.hpp
//  C++Demo
//
//  Created by LiYang on 17/5/11.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#ifndef ObjectClass_hpp
#define ObjectClass_hpp

#include <stdio.h>
#include <iostream>


//运算符重载其实就是定义一个函数，在函数体内实现想要的功能，当用到该运算符时，编译器会自动调用这个函数。也就是说，运算符重载是通过函数实现的，它本质上是函数重载。
//
//运算符重载的格式为：
//返回值类型 operator 运算符名称 (形参表列){
//    //TODO:
//}
//operator是关键字，专门用于定义重载运算符的函数。我们可以将operator 运算符名称这一部分看做函数名，对于上面的代码，函数名就是operator+。

using namespace std;
class complex{
public:
    complex();
    complex(double real,double imag);
public:
    complex operator + (const complex &A)const;
    friend complex operator -(const complex &A,const complex &B);
    
    void display() const;
    void displayCut() const;
    
private:
    double m_real;
    double m_imag;
    
};
#endif /* ObjectClass_hpp */
