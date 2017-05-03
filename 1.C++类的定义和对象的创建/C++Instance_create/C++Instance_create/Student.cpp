//
//  Student.cpp
//  C++Instance_create
//
//  Created by MacBook on 2017/5/3.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class Student{

public:
    int age;
    char * name;
    float score;
public:
    void sleep(){
    
        std::cout<< "age->>" <<age <<"name->>"<<name<<"score->>"<<score<<endl;
        
    }
    
};
