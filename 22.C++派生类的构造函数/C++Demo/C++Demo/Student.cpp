//
//  Student.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/8.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include "Student.hpp"

//People(name, age)就是调用基类的构造函数
Student::Student(char*name,int age,float score):People(name,age),m_score(score){

    this -> display();
    
}
Student::Student():m_score(0.0){}//派生类默认构造函数
//People(name, age)就是调用基类的构造函数，并将 name 和 age 作为实参传递给它，m_score(score)是派生类的参数初始化表，它们之间以逗号,隔开。
//但是不管它们的顺序如何，派生类构造函数总是先调用基类构造函数再执行其他代码（包括参数初始化表以及函数体中的代码），总体上看和下面的形式类似：

void Student::display(){
    
   cout<<m_name<<"的年龄是"<<m_age<<"，成绩是"<<m_score<<"。"<<endl;
}
