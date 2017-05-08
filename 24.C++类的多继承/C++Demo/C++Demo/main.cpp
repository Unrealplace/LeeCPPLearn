//
//  main.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/8.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <iostream>
#include "BaseClass.hpp"

int main(int argc, const char * argv[]) {
    
    Derived obj(1, 2, 3, 4, 5);
    obj.display();
    return 0;
}
