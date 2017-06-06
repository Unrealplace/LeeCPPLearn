//
//  Complex.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/5.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include "Complex.hpp"

ostream & operator<<(ostream&out,Complex &c){

    out << c.m_real << " + "<<c.m_imag<<"i"<<endl;
    
    return out;
}
