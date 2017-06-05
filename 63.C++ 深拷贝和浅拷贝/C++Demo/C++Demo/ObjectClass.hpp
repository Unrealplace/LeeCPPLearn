//
//  ObjectClass.hpp
//  C++Demo
//
//  Created by LiYang on 2017/6/5.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#ifndef ObjectClass_hpp
#define ObjectClass_hpp

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <unistd.h> //相当于window下的 window.h文件
using namespace std;

//到底是浅拷贝还是深拷贝
//
//如果一个类拥有指针类型的成员变量，那么绝大部分情况下就需要深拷贝，因为只有这样，才能将指针指向的内容再复制出一份来，让原有对象和新生对象相互独立，彼此之间不受影响。如果类的成员变量没有指针，一般浅拷贝足以。
//
//另外一种需要深拷贝的情况就是在创建对象时进行一些预处理工作，比如统计创建过的对象的数目、记录对象创建的时间等，请看下面的例子：

class Base{
private:
    int m_a;
    int m_b;
    time_t m_time;//
    static int m_count;//
public:
    int getCount() const{
        return m_count;
    }
    time_t getTime() const{
        return m_time;
    }
    
public:
    Base():m_a(0),m_b(0){}
    Base(int a,int b):m_a(a),m_b(b){}
    Base(const Base & obj);
};

//变长数组类
class Array{
private:
    int m_len;
    int *m_p;
public:
    Array(int len);
    Array(const Array & arr); //拷贝构造函数
    ~Array();
public:
     int operator[](int i) const {
         cout<<"m_p:::"<<m_p[i]<<endl;
        return m_p[i];
    }//获取元素
    int  &operator[](int i){
        cout<<"m_p》》》"<<m_p[i]<<endl;
        return m_p[i];
    }//写入元素
    int length()const{
        return m_len;
    }
};



#endif /* ObjectClass_hpp */
