//
//  main.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/5.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include <iostream>
#include "Complex.hpp"
#include "SimpleComplex.hpp"

int main(int argc, const char * argv[]) {
    
    Complex a(10.0,220.0);
    
//    a = (Complex)23.4;//转化失败，错误
    
//    幸运的是，C++ 允许我们自定义类型转换规则，用户可以将其它类型转换为当前类类型，也可以将当前类类型转换为其它类型。这种自定义的类型转换规则只能以类的成员函数的形式出现，换句话说，这种转换规则只适用于类。
//    
//    本节我们先讲解如何将其它类型转换为当前类类型，下节再讲解如何将当前类类型转换为其它类型。

    cout << a<<endl;
    
    a = 3.5; //调用转换构造函数
    cout << a << endl;
    
//    在进行数学运算、赋值、拷贝等操作时，如果遇到类型不兼容、需要将 double 类型转换为 Complex 类型时，编译器会检索当前的类是否定义了转换构造函数，如果没有定义的话就转换失败，如果定义了的话就调用转换构造函数。
//    
//    转换构造函数也是构造函数的一种，它除了可以用来将其它类型转换为当前类类型，还可以用来初始化对象，这是构造函数本来的意义。下面创建对象的方式是正确的：
    Complex c1(26.4);  //创建具名对象
    Complex c2 = 240.3;  //以拷贝的方式初始化对象
    Complex(15.9);  //创建匿名对象
    c1 = Complex(46.9);  //创建一个匿名对象并将它赋值给 c1
    
    
    cout <<"**************************"<<endl;
    Complex c3 = 100;  //int --> double --> Complex
    cout<<c3<<endl;
    c3 = 'A';  //char --> int --> double --> Complex
    cout<<c3<<endl;
    c3 = true;  //bool --> int --> double --> Complex
    cout<<c3<<endl;
    Complex c4(25.8, 0.7);
    //假设已经重载了+运算符
//    c3 = c4 + 'H' + true + 15;  //将char、bool、int都转换为Complex类型再运算
    cout<<c3<<endl;
    cout <<"**************************"<<endl;

    NewComplex aa(10.0, 20.0);  //向构造函数传递 2 个实参，不使用默认参数
    NewComplex bb(89.5);  //向构造函数传递 1 个实参，使用 1 个默认参数
    NewComplex cc;  //不向构造函数传递实参，使用全部默认参数
    aa = 25.5;  //调用转换构造函数（向构造函数传递 1 个实参，使用 1 个默认参数）

    cout << aa <<bb<<cc<<endl;
    
    
    return 0;
}
