//
//  People.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/5.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include "People.hpp"


void People::setage(int age){

    this -> m_age = age;
}

void People::setname(char *name){

    this -> m_name = name;
}
char *People::getname(){

    return this -> m_name;
}
int People::getage(){

    return this -> m_age;
}

