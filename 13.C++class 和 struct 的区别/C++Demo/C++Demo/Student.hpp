//
//  Student.hpp
//  C++Demo
//
//  Created by MacBook on 2017/5/4.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

struct Student{

    Student(char *name,int age,float score);
    void show();
    
    char * m_name;
    int    m_age;
    float  m_score;
    
};


#endif /* Student_hpp */
