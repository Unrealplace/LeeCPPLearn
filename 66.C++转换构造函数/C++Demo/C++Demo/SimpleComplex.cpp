//
//  SimpleComplex.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/5.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include "SimpleComplex.hpp"
//重载>>运算符
ostream & operator<<(ostream &out, NewComplex &c){
    out << c.m_real <<" + "<< c.m_imag <<"i";;
    return out;
}
