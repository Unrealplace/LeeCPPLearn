//
//  main.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/9.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <iostream>
#include "ObjectClass.hpp"

int main(int argc, const char * argv[]) {
    
    
    
    B b(10, 20);
    b.display();
    
    C c(30, 40);
    c.display();
    D d(50, 60, 70, 80);
    d.display();
    
    return 0;
}
