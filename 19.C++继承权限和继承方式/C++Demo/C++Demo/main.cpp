//
//  main.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/5.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <iostream>
#include "Student.hpp"

int main(int argc, const char * argv[]) {
    
    
//    这是一个多级继承的例子，Student 继承自 People，GirlStudent 又继承自 Student，它们的继承关系为 People --> Student --> GirlStudent。GirlStudent 是最终的派生类，它拥有基类的 m_name、m_age、m_score、m_hobby 成员变量以及 setname()、setage()、sethobby()、gethobby()、setscore() 成员函数。
//    
//    注意，在派生类 GirlStudent 的成员函数 display() 中，我们借助基类的 public 成员函数 gethobby() 来访问基类的 private 成员变量 m_bobby，因为 m_hobby 是 private 属性的，在派生类中不可见，所以只能借助基类的 public 成员函数 sethobby()、gethobby() 来访问
    
//   在派生类中访问基类 private 成员的唯一方法就是借助基类的非 private 成员函数，如果基类没有非 private 成员函数，那么该成员在派生类中将无法访问（除非使用下面讲到的 using 关键字）。
    
    
    GirlStudent pup;
    pup.setname("小明");
    pup.setage(15);
    pup.setscore(92.5f);
    pup.setranking(4);
    pup.sethobby("乒乓球");
    pup.display();
    
    
    
    StudenB stu;
    stu.m_name = "小明";
    stu.m_age = 16;
//    stu.m_score = 99.5f;
//    stu.show();  //compile error
    stu.learning();
    
    
    
    
    return 0;
}
