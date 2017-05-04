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

//在类中，static 除了可以声明静态成员变量，还可以声明静态成员函数。普通成员函数可以访问所有成员（包括成员变量和成员函数），静态成员函数只能访问静态成员。
//
//编译器在编译一个普通成员函数时，会隐式地增加一个形参 this，并把当前对象的地址赋值给 this，所以普通成员函数只能在创建对象后通过对象来调用，因为它需要当前对象的地址。而静态成员函数可以通过类来直接调用，编译器不会为它增加形参 this，它不需要当前对象的地址，所以不管有没有创建对象，都可以调用静态成员函数。
//
//普通成员变量占用对象的内存，静态成员函数没有 this 指针，不知道指向哪个对象，无法访问对象的成员变量，也就是说静态成员函数不能访问普通成员变量，只能访问静态成员变量。
//
//普通成员函数必须通过对象才能调用，而静态成员函数没有 this 指针，无法在函数体内部访问某个对象，所以不能调用普通成员函数，只能调用静态成员函数。
//
//静态成员函数与普通成员函数的根本区别在于：普通成员函数有 this 指针，可以访问类中的任意成员；而静态成员函数没有 this 指针，只能访问静态成员（包括静态成员变量和静态成员函数）。

class Student{

public:
    Student(char * name,int age,float score);
    void show();
public:
    static int   getTotal();
    static float getPoints();
private:
    static int m_total;
    static float m_points;
private:
    char * m_name;
    int    m_age;
    float  m_score;
    
};


inline Student::Student(char *name, int age, float score): m_name(name), m_age(age), m_score(score){
    m_total++;
    m_points += score;
}
inline void Student::show(){
    cout<<m_name<<"的年龄是"<<m_age<<"，成绩是"<<m_score<<endl;
}

//定义静态成员函数
inline int Student::getTotal(){
    return m_total;
}
inline float Student::getPoints(){
    return m_points;
}


