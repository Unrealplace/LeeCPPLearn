//
//  ObjectClass.cpp
//  C++Demo
//
//  Created by LiYang on 17/5/9.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include "ObjectClass.hpp"

People::People(char *name, int age): m_name(name), m_age(age){}
void People::display(){
    cout<<m_name<<"今年"<<m_age<<"岁了，是个无业游民。"<<endl;
}


Teacher::Teacher(char *name, int age, int salary): People(name, age), m_salary(salary){}
void Teacher::display(){
    cout<<m_name<<"今年"<<m_age<<"岁了，是一名教师，每月有"<<m_salary<<"元的收入。"<<endl;
}
