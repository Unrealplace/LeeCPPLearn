//
//  People.hpp
//  C++Demo
//
//  Created by MacBook on 2017/5/8.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#ifndef People_hpp
#define People_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class People{

protected:
    char * m_name;
    int m_age;
public:
    People(char*,int);
    People();
};

#endif /* People_hpp */
