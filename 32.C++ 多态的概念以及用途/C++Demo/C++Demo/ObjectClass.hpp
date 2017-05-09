//
//  ObjectClass.hpp
//  C++Demo
//
//  Created by LiYang on 17/5/9.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#ifndef ObjectClass_hpp
#define ObjectClass_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class People{

public:
    People(char*name,int  age);
   virtual void display();
protected:
    char * m_name;
    int m_age;
};

class Teacher:public People{

public:
    Teacher(char *name,int age, int salary);
  
     void display();
private:
    int m_salary;
    
};




#endif /* ObjectClass_hpp */
