//
//  Student.hpp
//  C++Demo
//
//  Created by MacBook on 2017/5/8.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include "People.hpp"

class Student:public People{

public:
    Student(char *name,int age,float score);
public:
    void show();//重写基类的方法，相当于遮蔽了这个方法
private:
    float m_score;
};

#endif /* Student_hpp */
