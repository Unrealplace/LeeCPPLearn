//
//  People.hpp
//  C++Demo
//
//  Created by MacBook on 2017/5/5.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#ifndef People_hpp
#define People_hpp

#include <stdio.h>
#include <iostream>
using namespace std;


class People{

public:
    void setname(char *name);
    void setage(int age);
    void sethobby(char * hobby);
    char * gethobby();
    void show();

protected:
    char * m_name;
    int    m_age;
private:
    char * m_hobby;

    
    
};

#endif /* People_hpp */
