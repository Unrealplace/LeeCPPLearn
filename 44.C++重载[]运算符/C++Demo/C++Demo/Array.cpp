//
//  Array.cpp
//  C++Demo
//
//  Created by LiYang on 2017/5/31.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include "Array.hpp"
Array::Array(int length):m_length(length){

    if (length == 0) {
        m_p = NULL;
    }else{
        m_p = new int[length];
    }
}
Array::~Array(){

    delete [] m_p;
    
}
int & Array ::operator[](int i){

    return m_p[i];
}

const int & Array::operator[](int i) const{

    return m_p[i];
}
void Array::display() const{

    for (int i = 0; i < m_length; i++) {
        if (i == m_length -1) {
            cout << m_p[i]<<endl;
        }else{
        
            cout << m_p[i]<<", ";
        }
    }
}
