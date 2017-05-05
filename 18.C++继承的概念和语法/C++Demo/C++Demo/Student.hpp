//
//  Student.hpp
//  C++Demo
//
//  Created by MacBook on 2017/5/5.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include "People.hpp"


//本例中，People 是基类，Student 是派生类。Student 类继承了 People 类的成员，同时还新增了自己的成员变量 score 和成员函数 setscore()、getscore()。这些继承过来的成员，可以通过子类对象访问，就像自己的一样。
//
//请认真观察代码第21行：
//
//class Student: public People
//这就是声明派生类的语法。class 后面的“Student”是新声明的派生类，冒号后面的“People”是已经存在的基类。在“People”之前有一关键宇 public，用来表示是公有继承。
//
//由此总结出继承的一般语法为：
//
//class 派生类名:［继承方式］ 基类名{
//    派生类新增加的成员
//};
//继承方式包括 public（公有的）、private（私有的）和 protected（受保护的），此项是可选的，如果不写，那么默认为 private。我们将在下节详细讲解这些不同的继承方式。

class Student:public People{

private:
    float m_score;
public:
    void setscore(float score);
    float getscore();
    void showinfo();
    
    Student(char* name,int age,float score);
    
};

#endif /* Student_hpp */
