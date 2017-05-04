//
//  main.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/4.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <iostream>
#include "Student.hpp"

int main(int argc, const char * argv[]) {
    
    Student stu("小明", 15, 92.5f);
    stu.show();
    Student *pstu = new Student("李华", 16, 96);
    pstu -> show();
    
    return 0;
}
