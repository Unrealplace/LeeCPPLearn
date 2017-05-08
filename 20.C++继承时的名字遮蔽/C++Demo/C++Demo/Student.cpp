//
//  Student.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/8.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include "Student.hpp"

void Student::show(){

    cout<<m_name<<"的年龄是"<<m_age<<"，成绩是"<<m_score<<endl;
}
Student::Student(char *name,int age,float score){

    this -> m_score = score;
    this -> m_age = age;
    this -> m_name = name;
    
}
