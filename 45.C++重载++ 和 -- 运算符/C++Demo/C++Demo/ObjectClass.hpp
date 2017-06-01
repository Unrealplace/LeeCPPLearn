//
//  ObjectClass.hpp
//  C++Demo
//
//  Created by LiYang on 2017/6/1.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#ifndef ObjectClass_hpp
#define ObjectClass_hpp

#include <stdio.h>
#include <iostream>
#include <iomanip>
 
using namespace std;
//秒表类
class stopWatch{
public:
    stopWatch():m_min(0),m_sec(0){};
private:
    int m_min;
    int m_sec;
public:
    void setzero(){
        m_min = 0;
        m_sec  = 0;
    }
    stopWatch run();//运行
    stopWatch operator++(); //前置形式
    stopWatch operator++(int);//后置形式
    friend ostream & operator<<(ostream &,const stopWatch &);
};

#endif /* ObjectClass_hpp */
