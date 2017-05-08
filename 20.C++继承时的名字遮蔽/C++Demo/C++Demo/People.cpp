//
//  People.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/8.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include "People.hpp"

void People::show(){

    cout<<"嗨，大家好，我叫"<<m_name<<"，今年"<<m_age<<"岁"<<endl;
}

void Base::func(){
    cout<<"Base::func()"<<endl;
}
void Base::func(int a){

    cout<<"Base::func(int)"<<endl;
}

void Derived::func(char *str){ cout<<"Derived::func(char *)"<<endl; }
void Derived::func(bool is){ cout<<"Derived::func(bool)"<<endl;}
