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
   
    Student stu("oliver",144,98);
    
    stu.show();//使用重载的函数来调用
    
    stu.People::show();//使用父类的函数来调用
    
    
    
    Derived d;
    d.func("c.biancheng.net");
    d.func(true);
//    d.func();  //compile error
    d.func(10);  //compile error
    d.Base::func();
    d.Base::func(100);
    
    
    return 0;
}
