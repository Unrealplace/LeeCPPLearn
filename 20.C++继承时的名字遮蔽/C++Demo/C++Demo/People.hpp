//
//  People.hpp
//  C++Demo
//
//  Created by MacBook on 2017/5/8.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#ifndef People_hpp
#define People_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

//如果派生类中的成员（包括成员变量和成员函数）和基类中的成员重名，那么就会遮蔽从基类继承过来的成员。所谓遮蔽，就是在派生类中使用该成员（包括在定义派生类时使用，也包括通过派生类对象访问该成员）时，实际上使用的是派生类新增的成员，而不是从基类继承来的。

class People{
public:
    void show();
protected:
    char * m_name;
    int m_age;
    
};


//基类成员函数和派生类成员函数不构成重载
//基类成员和派生类成员的名字一样时会造成遮蔽，这句话对于成员变量很好理解，对于成员函数要引起注意，不管函数的参数如何，只要名字一样就会造成遮蔽。换句话说，基类成员函数和派生类成员函数不会构成重载，如果派生类有同名函数，那么就会遮蔽基类中的所有同名函数，不管它们的参数是否一样。

class Base{

public:
    void func();
    void func(int);
};
//派生类
class Derived:public Base{

public:
    void func(char*);
    void func(bool);
    
};

//本例中，Base 类的func()、func(int)和 Derived 类的func(char *)、func(bool)四个成员函数的名字相同，参数列表不同，它们看似构成了重载，能够通过对象 d 访问所有的函数，实则不然，Derive 类的 func 遮蔽了 Base 类的 func，导致第 26、27 行代码没有匹配的函数，所以调用失败。
//
//如果说有重载关系，那么也是 Base 类的两个 func 构成重载，而 Derive 类的两个 func 构成另外的重载。
//
//至于 Base 类和 Derived 类的 4 个 func 为什么不会构成重载，我们将在VIP教程《类继承时的作用域嵌套》一节中讲解，届时读者必将有所顿悟。




#endif /* People_hpp */
