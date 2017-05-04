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
    
    Student stu("小明", 15, 90.6);
    show(&stu);  //调用友元函数
    Student *pstu = new Student("李磊", 16, 80.5);
    show(pstu);  //调用友元函数
    
    
    Student *pstu2 = new Student("李磊", 16, 80.5);
    Address *paddr = new Address("河北", "衡水", "桃城");
    pstu2 -> showAddr(paddr);
    
    
    return 0;
}
