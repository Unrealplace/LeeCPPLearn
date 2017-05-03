//
//  Student.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/3.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class Student{

public:
    void setname(char*name);
    void setage(int age);
    void setscore(float score);
    void show();
private:
    char * name;
    int age;
    float score;
    
};

//this 是 C++ 中的一个关键字，也是一个 const 指针，它指向当前对象，通过它可以访问当前对象的所有成员。
//
//所谓当前对象，是指正在使用的对象。例如对于stu.show();，stu 就是当前对象，this 就指向 stu。
inline void Student::setname(char *name){

    this -> name = name;
}

inline void Student::setage(int age){

    this -> age = age;
}
inline void Student::setscore(float score){

    this -> score = score;
    
}
//this 只能用在类的内部，通过 this 可以访问类的所有成员，包括 private、protected、public 属性的。
//
//本例中成员函数的参数和成员变量重名，只能通过 this 区分。以成员函数setname(char *name)为例，它的形参是name，和成员变量name重名，如果写作name = name;这样的语句，就是给形参name赋值，而不是给成员变量name赋值。而写作this -> name = name;后，=左边的name就是成员变量，右边的name就是形参，一目了然。
//
//注意，this 是一个指针，要用->来访问成员变量或成员函数。
//
//this 虽然用在类的内部，但是只有在对象被创建以后才会给 this 赋值，并且这个赋值的过程是编译器自动完成的，不需要用户干预，用户也不能显式地给 this 赋值。本例中，this 的值和 pstu 的值是相同的。

inline void Student::show(){

    cout << this -> name << this -> age << this -> score << "  this->>>"<< this <<endl;
    
}

//几点注意：
//this 是 const 指针，它的值是不能被修改的，一切企图修改该指针的操作，如赋值、递增、递减等都是不允许的。
//this 只能在成员函数内部使用，用在其他地方没有意义，也是非法的。
//只有当对象被创建后 this 才有意义，因此不能在 static 成员函数中使用（后续会讲到 static 成员）。
//
//this 到底是什么
//this 实际上是成员函数的一个形参，在调用成员函数时将对象的地址作为实参传递给 this。不过 this 这个形参是隐式的，它并不出现在代码中，而是在编译阶段由编译器默默地将它添加到参数列表中。
//
//this 作为隐式形参，本质上是成员函数的局部变量，所以只能用在成员函数的内部，并且只有在通过对象调用成员函数时才给 this 赋值。




