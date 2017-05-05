//
//  Student.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/5.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include "Student.hpp"

void Student:: setscore(float score){

    this -> m_score = score;
}
float Student::getscore(){

    return this -> m_score;
}
void Student::showinfo(){

    cout << this ->getname() <<"  "<< this -> getage() <<"  "<< this -> getscore()<<"  "<<this->sex <<endl;
    
}
Student::Student(char *name,int age,float score){

    this -> setname(name);
    this -> setage(age);
    this -> m_score = score;
    
}
