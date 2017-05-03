//
//  main.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/3.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <iostream>
#include "Student.cpp"
using namespace std;

int main(int argc, const char * argv[]) {

    Student stu;
    stu.setage(25);
    stu.setname("oliver");
    stu.setscore(100);
    stu.show();
    
    Student *pstu = new Student();
    pstu -> setage(25);
    pstu -> setname("oliver lee");
    pstu -> setscore(1000);
    pstu -> show();
    
    
    
    
    return 0;
}
