//
//  Student.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/4.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;


//在类中，如果你不希望某些数据被修改，可以使用const关键字加以限定。const 可以用来修饰成员变量、成员函数以及对象。
//const成员变量
//const 成员变量的用法和普通 const 变量的用法相似，只需要在声明时加上 const 关键字。初始化 const 成员变量只有一种方法，就是通过参数初始化表，这点在前面已经讲到了，请猛击《C++构造函数的参数初始化表》回顾。
//const成员函数
//const 成员函数可以使用类中的所有成员变量，但是不能修改它们的值，这种措施主要还是为了保护数据而设置的。const 成员函数也称为常成员函数。
//
//常成员函数需要在声明和定义的时候在函数头部的结尾加上 const 关键字，请看下面的例子：


class Student{

public:
    Student(char*name,int age,float score);
    void show();
    
    //声明常成员函数
    char * getname() const;
    int getage() const;
    float getscore() const;
    
private:
    char * m_name;
    int m_age;
    float m_score;
    
    
};

inline void Student::show(){

  cout<<m_name<<"的年龄是"<<m_age<<"，成绩是"<<m_score<<endl;
}
inline Student::Student(char*name,int age,float score):m_name(name),m_age(age),m_score(score){

    this ->show();
    
}

//getname()、getage()、getscore() 三个函数的功能都很简单，仅仅是为了获取成员变量的值，没有任何修改成员变量的企图，所以我们加了 const 限制，这是一种保险的做法，同时也使得语义更加明显。
//
//需要注意的是，必须在成员函数的声明和定义处同时加上 const 关键字。char *getname() const和char *getname()是两个不同的函数原型，如果只在一个地方加 const 会导致声明和定义处的函数原型冲突。

inline int Student::getage()const{

    return m_age;
}
inline float Student::getscore()const{

    return m_score;
}
inline char * Student::getname()const{

    return m_name;
}
