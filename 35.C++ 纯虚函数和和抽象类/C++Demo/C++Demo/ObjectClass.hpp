//
//  ObjectClass.hpp
//  C++Demo
//
//  Created by LiYang on 17/5/10.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#ifndef ObjectClass_hpp
#define ObjectClass_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

//基类线 抽象类不能生 对象

//在C++中，可以将虚函数声明为纯虚函数，语法格式为：
//virtual 返回值类型 函数名 (函数参数) = 0;
//纯虚函数没有函数体，只有函数声明，在虚函数声明的结尾加上=0，表明此函数为纯虚函数。
//最后的=0并不表示函数返回值为0，它只起形式上的作用，告诉编译系统“这是纯虚函数”。
//包含纯虚函数的类称为抽象类（Abstract Class）。之所以说它抽象，是因为它无法实例化，也就是无法创建对象。原因很明显，纯虚函数没有函数体，不是完整的函数，无法调用，也无法为其分配内存空间。
//


//抽象类通常是作为基类，让派生类去实现纯虚函数。派生类必须实现纯虚函数才能被实例化。
class Line {
public:
    Line(float len);
    virtual float area() = 0;
    virtual float volume() = 0;
protected:
    float m_len;
};

//矩形
class Rec:public Line{
public:
    Rec(float len,float width);
    float area();
protected:
    float m_width;
    
};
//长方体
class Cuboid:public Rec{

public:
    Cuboid(float len,float width,float height);
    float area();
    float volume();
protected:
    float m_height;
};
//正方体
class Cube:public Cuboid{
public:
    Cube(float len);
    float area();
    float volume();
    
};


#endif /* ObjectClass_hpp */
