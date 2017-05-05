//
//  main.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/5.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <iostream>
#include "Student.hpp"

int main(int argc, const char * argv[]) {

    Student  stu =  Student("oliver",100,100);
    
    stu.sex = string("Boy");
    
    stu.showinfo();
    
    

    return 0;
}
