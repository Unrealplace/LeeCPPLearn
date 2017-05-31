//
//  main.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/25.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <iostream>
#include "ObjectClass.hpp"

int main(int argc, const char * argv[]) {
  
    
    complex c1,c2,c3;
    cin>>c1;
    cout<<"next"<<endl;
    cin>>c2;
    
    c3=c1+c2;
    cout<<"c1+c2 =" <<c3<<endl;
    
    
    c3 = c1 - c2;
    cout<<"c1 - c2 = "<<c3<<endl;
    c3 = c1 * c2;
    cout<<"c1 * c2 = "<<c3<<endl;
    c3 = c1 / c2;
    cout<<"c1 / c2 = "<<c3<<endl;
    
    
//    2 3
//    next
//    3 2
//    c1+c2 =5 + 5 i

    return 0;
}
