//
//  ObjectClass.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/2.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include "ObjectClass.hpp"

void OutOfRang::what()const{
    if (m_flag == 1) {
        cout<<"error  array,no elements to pop."<<endl;
    }else if (m_flag == 2){
        cout<<"Error: out of range( array length "<<m_len<<", access index "<<m_index<<" )"<<endl;
    }else{
        cout<<"Unknown exception."<<endl;
    }
}

