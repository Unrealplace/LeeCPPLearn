//
//  main.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/8.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <iostream>
#include "Student.hpp"

int main(int argc, const char * argv[]) {
    
    Student stu("小明", 16, 90.5);
    stu.display();
    
    
    Student stu1;
    stu1.display();
    
//    创建对象 stu1 时，执行派生类的构造函数Student::Student()，它并没有指明要调用基类的哪一个构造函数，从运行结果可以很明显地看出来，系统默认调用了不带参数的构造函数，也就是People::People()。
//    
//    创建对象 stu2 时，执行派生类的构造函数Student::Student(char *name, int age, float score)，它指明了基类的构造函数。
//    
//    在第 27 行代码中，如果将People(name, age)去掉，也会调用默认构造函数，第 37 行的输出结果将变为：
//    xxx的年龄是0，成绩是90.5。
//    
//    如果将基类 People 中不带参数的构造函数删除，那么会发生编译错误，因为创建对象 stu1 时需要调用 People 类的默认构造函数， 而 People 类中已经显式定义了构造函数，编译器不会再生成默认的构造函数。
    
    return 0;
}
