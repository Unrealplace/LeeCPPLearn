//
//  ObjectClass.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/1.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include "ObjectClass.hpp"

stopWatch stopWatch::run(){
    ++m_sec;
    if (m_sec == 60) {
        m_min++;
        m_sec = 0;
    }
    return *this;
    
}

stopWatch stopWatch::operator++(){
    return run();
}

stopWatch stopWatch::operator++(int n ){

    stopWatch  s = *this;
    run();
    return s;
}
ostream &operator << (ostream & out ,const stopWatch & s){

    out<<setfill('0')<<setw(2)<<s.m_min<<":"<<setw(2)<<s.m_sec;
    return out;
}


