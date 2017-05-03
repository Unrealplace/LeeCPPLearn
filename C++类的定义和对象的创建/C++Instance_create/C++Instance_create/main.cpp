//
//  main.cpp
//  C++Instance_create
//
//  Created by MacBook on 2017/5/3.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <iostream>
#include "Student.cpp"

int main(int argc, const char * argv[]) {

    char * name;
    name = "oliver";
    
    //1.student 相对于一个新的数据类型，oliver 相当于变量，类似于结构体。
    Student oliver;
    oliver.age = 25;
    oliver.score = 100;
    oliver.name  = name;
    oliver.sleep();
    
    //2.创建对象数组。
    Student stu[10];
    //3.使用对象指针， 上面代码中创建的对象 oliver 在栈上分配内存， 当然，你也可以在堆上创建对象，这个时候就需要使用前面讲到的 New
    Student * P_st = new Student;
    //在栈上创建出来的对象都有一个名字，比如 oliver，使用指针指向它不是必须的。但是通过 new 创建出来的对象就不一样了，它在堆上分配内存，没有名字，只能得到一个指向它的指针，所以必须使用一个指针变量来接收这个指针，否则以后再也无法找到这个对象了，更没有办法使用它。也就是说，使用 new 在堆上创建出来的对象是匿名的，没法直接使用，必须要用一个指针指向它，再借助指针来访问它的成员变量或成员函数。
    //栈内存是程序自动管理的，不能使用 delete 删除在栈上创建的对象；堆内存由程序员管理，对象使用完毕后可以通过 delete 删除。在实际开发中，new 和 delete 往往成对出现，以保证及时删除不再使用的对象，防止无用内存堆积。
    P_st -> age   = oliver.age;
    P_st -> score = oliver.score;
    P_st -> name  = oliver.name;
    P_st -> sleep();
    delete P_st;//删除堆上的对象
    
    
   //本节重点讲解了两种创建对象的方式：一种是在栈上创建，形式和定义普通变量类似；另外一种是在堆上创建，必须要用一个指针指向它，读者要记得 delete 掉不再使用的对象。
    
    return 0;
}
