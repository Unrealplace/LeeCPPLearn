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
void show(Student *pstu){

 cout<<pstu->m_name<<"的年龄是 "<<pstu->m_age<<"，成绩是 "<<pstu->m_score<<endl;
}
void Student::showAddr(Address *addr){
    cout<<m_name<<"的年龄是 "<<m_age<<"，成绩是 "<<m_score<<endl;
    cout<<"家庭住址："<<addr->m_province<<"省"<<addr->m_city<<"市"<<addr->m_district<<"区"<<endl;
}
//实现Address类
Address::Address(char *province, char *city, char *district){
    m_province = province;
    m_city     = city;
    m_district = district;
}
Dog::Dog(char * name,int age):m_name(name),m_age(age){

}
void Dog::showDog(){

    cout << "友元类 dog" << endl;
}
