//
//  Complex.hpp
//  C++Demo
//
//  Created by LiYang on 2017/6/5.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#ifndef Complex_hpp
#define Complex_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Complex{
    
private:
    double m_real;//
    double m_imag;//
public:
    Complex():m_real(0),m_imag(0){}
    Complex(double real,double imag):m_real(real),m_imag(imag){}
//    转换构造函数
//    
//    将其它类型转换为当前类类型需要借助转换构造函数（Conversion constructor）。转换构造函数也是一种构造函数，它遵循构造函数的一般规则。转换构造函数只有一个参数。
    Complex(double real):m_real(real),m_imag(0.0){}//转换构造函数

public:
    friend ostream & operator<<(ostream&out ,Complex &c);//友元函数

    
    
//    再谈构造函数
//    
//    构造函数的本意是在创建对象的时候初始化对象，编译器会根据传递的实参来匹配不同的（重载的）构造函数。回顾一下以前的章节，到目前为止我们已经学习了以下几种构造函数。
//    
//    1) 默认构造函数。就是编译器自动生成的构造函数。以 Complex 类为例，它的原型为：
//    Complex();  //没有参数
//    
//    2) 普通构造函数。就是用户自定义的构造函数。以 Complex 类为例，它的原型为：
//    Complex(double real, double imag);  //两个参数
//    
//    3) 拷贝构造函数。在以拷贝的方式初始化对象时调用。以 Complex 类为例，它的原型为：
//    Complex(const Complex &c);
//    
//    4) 转换构造函数。将其它类型转换为当前类类型时调用。以 Complex 为例，它的原型为：
//    Complex(double real);
//    
//    不管哪一种构造函数，都能够用来初始化对象，这是构造函数的本意。假设 Complex 类定义了以上所有的构造函数，那么下面创建对象的方式都是正确的：
//    Complex c1();  //调用Complex()
//    Complex c2(10, 20);  //调用Complex(double real, double imag)
//    Complex c3(c2);  //调用Complex(const Complex &c)
//    Complex c4(25.7);  //调用Complex(double real)
//    这些代码都体现了构造函数的本意——在创建对象时初始化对象。
//
//    除了在创建对象时初始化对象，其他情况下也会调用构造函数，例如，以拷贝的的方式初始化对象时会调用拷贝构造函数，将其它类型转换为当前类类型时会调用转换构造函数。这些在其他情况下调用的构造函数，就成了特殊的构造函数了。特殊的构造函数并不一定能体现出构造函数的本意。
    
    
};

#endif /* Complex_hpp */
