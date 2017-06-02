//
//  Template.hpp
//  C++Demo
//
//  Created by LiYang on 2017/6/2.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#ifndef Template_hpp
#define Template_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

template <class T1,class T2>
class Point {
public:
    Point(T1 x, T2 y):m_x(x),m_y(y){}
private:
    T1 m_x; // x
    T2 m_y;// y
    
public:
    T1 getX()const;
    void setX(T1 x);
    T2 getY()const;
    void setY(T2 y);
};

template<class T1,class T2>//模板头
T1 Point<T1,T2>::getX()const /*函数头*/ {
    return m_x;
}
template<class T1,class T2>
void Point<T1,T2>::setX(T1 x){
    m_x = x;
}
template<class T1, class T2>
T2 Point<T1, T2>::getY() const{
    return m_y;
}
template<class T1, class T2>
void Point<T1, T2>::setY(T2 y){
    m_y = y;
}

#endif /* Template_hpp */
