//
//  ObjectClass.cpp
//  C++Demo
//
//  Created by LiYang on 17/5/11.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include "ObjectClass.hpp"

complex operator -(const complex&A,const complex&B);

complex operator -(const complex&A,const complex &B){

    return complex(A.m_real - B.m_real,A.m_imag - B.m_imag);
}
void complex::displayCut()const{
    cout<<m_real<<" + "<<m_imag<<"i"<<endl;
}
complex::complex():m_real(0.0),m_imag(0.0){}

complex::complex(double real,double imag):m_real(real),m_imag(imag){}

complex complex::operator+(const complex &A)const{
    return complex(this->m_real + A.m_real, this->m_imag + A.m_imag);
}
void complex::display() const{
    cout<<m_real<<" + "<<m_imag<<"i"<<endl;
}
