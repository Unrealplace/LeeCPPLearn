//
//  main.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/4.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <iostream>
#include "Student.cpp"

int main(int argc, const char * argv[]) {

    
//const 也可以用来修饰对象，称为常对象。一旦将对象定义为常对象之后，就只能调用类的 const 成员了。
    
//    定义常对象的语法和定义常量的语法类似：
//    
//    const  class  object(params);
//    class const object(params);
//    当然你也可以定义 const 指针：
//    
//    const class *p = new class(params);
//    class const *p = new class(params);
//    class为类名，object为对象名，params为实参列表，p为指针名。两种方式定义出来的对象都是常对象。
//    
//    如果你对 const 的用法不理解，请猛击《C语言const：禁止修改变量的值》。
//    
//    一旦将对象定义为常对象之后，不管是哪种形式，该对象就只能访问被 const 修饰的成员了（包括 const 成员变量和 const 成员函数），因为非 const 成员可能会修改对象的数据（编译器也会这样假设），C++禁止这样做。
    
    
    const Student stu = Student("oliver", 23, 99);
    Student const stu2 = Student("oliver", 23, 99);
    const Student * pstu = new Student("oliver", 23, 99);
    Student const * pstu2 = new Student("oliver", 23, 99);
    Student stu1 = Student("oliver lee", 54, 355);
    stu1.show();
    cout<< pstu -> getname()<<endl;;
    cout<< stu.getscore()<<endl;
    
    

    return 0;
}
