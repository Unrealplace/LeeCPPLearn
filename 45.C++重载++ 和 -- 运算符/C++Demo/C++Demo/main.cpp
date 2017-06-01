//
//  main.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/1.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include <iostream>
#include "ObjectClass.hpp"

int main(int argc, const char * argv[]) {
    
    
    stopWatch s1,s2;
    
    s1 = s2++;
    cout << "s1: "<<s1<<endl;
    cout << "s2: "<<s2<<endl;
    
    
    s1.setzero();
    s2.setzero();
    s1 = ++s2;
    cout << "s1: "<<s1<<endl;
    cout << "s2: "<<s2<<endl;
    return 0;
}
