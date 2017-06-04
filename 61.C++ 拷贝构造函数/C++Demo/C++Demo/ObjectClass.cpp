//
//  ObjectClass.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/4.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include "ObjectClass.hpp"

Student::Student(string name,int age,float score):m_name(name),m_age(age),m_score(score){}

Student::Student(const Student &stu){

    this->m_name = stu.m_name;
    this->m_age    = stu.m_age;
    this->m_score = stu.m_score;
    cout<<"Copy constructor was called."<<endl;
}
void Student::display(){
    cout<<m_name<<"的年龄是"<<m_age<<"，成绩是"<<m_score<<endl;
}
