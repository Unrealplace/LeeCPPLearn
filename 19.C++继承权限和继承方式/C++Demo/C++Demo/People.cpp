//
//  People.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/5.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include "People.hpp"

void People::setname(char *name){
    m_name = name;
}
void People::setage(int age){
    m_age = age;
}
void People::sethobby(char *hobby){
    m_hobby = hobby;
}
char *People::gethobby(){
    return m_hobby;
}
void People::show(){
    cout<<m_name<<"的年龄是"<<m_age<<endl;
}
