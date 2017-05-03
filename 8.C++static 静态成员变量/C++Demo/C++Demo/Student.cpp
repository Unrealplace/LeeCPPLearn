//
//  Student.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/3.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;


class Student{

// 在C++中，我们可以使用静态成员变量来实现多个对象共享数据的目标。静态成员变量是一种特殊的成员变量，它被关键字static修饰，

//static 成员变量属于类，不属于某个具体的对象，即使创建多个对象，也只为 m_total 分配一份内存，所有对象使用的都是这份内存中的数据。当某个对象修改了 m_total，也会影响到其他对象。
public:
    Student(char*name,int age,float score);
    void show();
public:
    static int m_total; // 静态成员变量；
private:
    char * m_name;
    int   m_age;
    float m_score;
};

inline Student::Student(char*name,int age,float score):m_name(name),m_age(age),m_score(score){

    m_total++;// 操作静态变量。
}
inline void Student::show(){

    cout<<m_name<<"的年龄是"<<m_age<<"，成绩是"<<m_score<<"（当前共有"<<m_total<<"名学生）"<<endl;
}




