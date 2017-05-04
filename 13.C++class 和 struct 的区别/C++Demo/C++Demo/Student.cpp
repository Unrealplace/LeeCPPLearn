//
//  Student.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/4.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include "Student.hpp"
Student::Student(char*name,int age,float score):m_name(name),m_age(age),m_score(score){
    
}
void Student::show(){
    
    cout<<m_name<<"的年龄是"<<m_age<<"，成绩是"<<m_score<<endl;
}
//这段代码可以通过编译，说明 struct 默认的成员都是 public 属性的，否则不能通过对象访问成员函数。如果将 struct 关键字替换为 class，那么就会编译报错。
