//
//  People.cpp
//  LeeCPPDemo
//
//  Created by MacBook on 2017/5/3.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class People{
public:
    char * name;
    int age;
    void eat(){
        std::cout <<"age"<<age<<"name"<<name<<endl;
    }
    
};
