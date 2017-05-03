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

    Student * pstu = new Student;
    pstu -> setname("oliver lee");
    pstu -> setscore(1000);
    pstu -> setage(45);
    pstu -> show();
    cout << pstu << endl;
    
    return 0;
}
