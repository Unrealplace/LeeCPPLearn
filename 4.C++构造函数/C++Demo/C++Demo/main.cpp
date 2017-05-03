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

    //创建函数时候向构造函数传参
    Student stu("oliver",34,344);
    stu.show();

    //创建函数时候向构造函数传参
    Student * pstu = new Student("oliver lee",45,888);
    pstu -> show();
    delete pstu;
    
    
    Student stu1;
    stu1.show();
    
    Student * pstu1 = new Student;
    pstu1 ->show();
    
    return 0;
}
