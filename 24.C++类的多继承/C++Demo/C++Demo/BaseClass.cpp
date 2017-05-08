
//
//  BaseClass.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/8.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include "BaseClass.hpp"

BaseA::BaseA(int a,int b):m_a(a),m_b(b){

    cout<<"BaseA constructor"<<endl;
}

BaseA::~BaseA(){
    cout<<"BaseA destructor"<<endl;
}
void BaseA::show(){
    cout<<"m_a = "<<m_a<<endl;
    cout<<"m_b = "<<m_b<<endl;
}

BaseB::BaseB(int c, int d): m_c(c), m_d(d){
    cout<<"BaseB constructor"<<endl;
}
BaseB::~BaseB(){
    cout<<"BaseB destructor"<<endl;
}
void BaseB::show(){
    cout<<"m_c = "<<m_c<<endl;
    cout<<"m_d = "<<m_d<<endl;
}

Derived::Derived(int a, int b, int c, int d, int e): BaseA(a, b), BaseB(c, d), m_e(e){
    cout<<"Derived constructor"<<endl;
}
Derived::~Derived(){
    cout<<"Derived destructor"<<endl;
}

//命名冲突
//当两个或多个基类中有同名的成员时，如果直接访问该成员，就会产生命名冲突，编译器不知道使用哪个基类的成员。这个时候需要在成员名字前面加上类名和域解析符::，以显式地指明到底使用哪个类的成员，消除二义性。
//
//修改上面的代码，为 BaseA 和 BaseB 类添加 show() 函数，并将 Derived 类的 show() 函数更名为 display()：
void Derived::display(){

    BaseA::show();  //调用BaseA类的show()函数
    BaseB::show();  //调用BaseB类的show()函数
    cout<<"m_e = "<<m_e<<endl;
}
