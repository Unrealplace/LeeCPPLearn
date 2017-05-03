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

private:
    int    m_age;
    char * m_name;
    float  m_score;
public:
    void setname(char*name);
    void setage(int age);
    void setscore(float score);
    void show();
};
//有读者可能会说，额外添加 set 函数和 get 函数多麻烦，直接将成员变量设置为 public 多省事！确实，这样做 99.9% 的情况下都不是一种错误，我也不认为这样做有什么不妥；但是，将成员变量设置为 private 是一种软件设计规范，尤其是在大中型项目中，还是请大家尽量遵守这一原则。 
inline void Student::setname(char *name){
    m_name = name;
}
inline void Student::setage(int age){
    m_age = age;
}
inline void Student::setscore(float score){
    m_score = score;
}
inline void Student::show(){

    std::cout << m_name << "age::" <<m_age<<"score::"<<m_score<<endl;
    
}
