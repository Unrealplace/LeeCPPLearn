//
//  main.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/3.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <iostream>
#include "Student.cpp"

int main(int argc, const char * argv[]) {

    Student stu = Student("oliver", 24, 26);
    
    stu.show();
    
    People peo = People(666);
    
    peo.show();
    

    return 0;
}
