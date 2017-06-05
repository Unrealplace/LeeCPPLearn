//
//  ObjectClass.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/5.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include "ObjectClass.hpp"

Array::Array(int len):m_len(len){
    
    m_p =(int *) calloc(len, sizeof(int));
}
Array::Array(const Array & arr){//

    this ->m_len = arr.m_len;
    this ->m_p    =(int*) calloc(this ->m_len, sizeof(int));
    memcpy(this->m_p, arr.m_p, this->m_len * sizeof(int));
    
}
Array::~Array(){
    free(m_p);
}
Array &Array::operator=(const Array &arr){//

    if (this != &arr) {//
        this->m_len = arr.m_len;
        free(this->m_p);//
        this ->m_p    =(int*) calloc(this ->m_len, sizeof(int));
        memcpy(this->m_p, arr.m_p, this->m_len * sizeof(int));
    }
    return *this;
}
