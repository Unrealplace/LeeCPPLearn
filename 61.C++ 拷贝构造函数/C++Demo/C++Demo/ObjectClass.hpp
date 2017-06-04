//
//  ObjectClass.hpp
//  C++Demo
//
//  Created by LiYang on 2017/6/4.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#ifndef ObjectClass_hpp
#define ObjectClass_hpp

#include <stdio.h>
#include <iostream>
using namespace std;


//严格来说，对象的创建包括两个阶段，首先要分配内存空间，然后再进行初始化：
//分配内存很好理解，就是在堆区、栈区或者全局数据区留出足够多的字节。这个时候的内存还比较“原始”，没有被“教化”，它所包含的数据一般是零值或者随机值，没有实际的意义。
//初始化就是首次对内存赋值，让它的数据有意义。注意是首次赋值，再次赋值不叫初始化。初始化的时候还可以为对象分配其他的资源（打开文件、连接网络、动态分配内存等），或者提前进行一些计算（根据价格和数量计算出总价、根据长度和宽度计算出矩形的面积等）等。说白了，初始化就是调用构造函数。
//
//很明显，这里所说的拷贝是在初始化阶段进行的，也就是用其它对象的数据来初始化新对象的内存。

class Student{

public:
    Student(string name ="",int age =0,float score = 0.0f);
    Student(const Student &stu);//拷贝构造函数
public:
    void display();
    
private:
    string m_name;
    int m_age;
    float m_score;
    
    
};

#endif /* ObjectClass_hpp */
