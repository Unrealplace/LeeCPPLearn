//
//  main.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/2.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include <iostream>
#include "Template.hpp"

int main(int argc, const char * argv[]) {
  
    Point<int , int> p1(10,20);
    cout<<"x="<<p1.getX()<<", y="<<p1.getY()<<endl;
    
    
    Point<int, char*> p2(10,"东京180度");
    cout<<"x="<<p2.getX()<<", y="<<p2.getY()<<endl;
    
    
    Point<char*, char*> *p3 = new Point<char *,  char *>("东京180度","北纬230度");
    cout<<"x="<<p3->getX()<<", y="<<p3->getY()<<endl;
    
    
//    x=10, y=20
//    x=10, y=东京180度
//    x=东京180度, y=北纬230度
    
    return 0;
}
