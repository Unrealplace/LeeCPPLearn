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

private:
    float m_score;
public:
    
    Student(char *name,int age,float score);
    Student();
    void display();
    
};

#endif /* Student_hpp */
