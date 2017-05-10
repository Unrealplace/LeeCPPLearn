//
//  ObjectClass.cpp
//  C++Demo
//
//  Created by LiYang on 17/5/10.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include "ObjectClass.hpp"
Line::Line(float len):m_len(len){}

Rec::Rec(float len, float width): Line(len), m_width(width){
}
float Rec::area(){
    return m_len * m_width;
}

Cuboid::Cuboid(float len,float width,float height):Rec(len,width),m_height(height){
    
}
float Cuboid::area(){
    return 2 * ( m_len*m_width + m_len*m_height + m_width*m_height);
}
float Cuboid::volume(){
    return m_len * m_width * m_height;
}


Cube::Cube(float len):Cuboid(len,len,len){}
float Cube::area(){

    return 6 * m_len* m_len;
}
float Cube::volume(){

    return  m_len * m_len * m_len;
}

