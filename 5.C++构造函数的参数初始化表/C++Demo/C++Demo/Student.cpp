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

private:
    char * m_name;
    int m_age;
    float m_score;
public:
    Student(char*name,int age,float score);
    void show();
};
// 采用参数初始化表
inline Student::Student(char*name,int age,float score):m_name(name),m_age(age),m_score(score){
//    如本例所示，定义构造函数时并没有在函数体中对成员变量一一赋值，其函数体为空（当然也可以有其他语句），而是在函数首部与函数体之间添加了一个冒号:，后面紧跟m_name(name), m_age(age), m_score(score)语句，这个语句的意思相当于函数体内部的m_name = name; m_age = age; m_score = score;语句，也是赋值的意思。
}
inline void Student::show(){
    cout<<m_name<<"的年龄是"<<m_age<<"，成绩是"<<m_score<<endl;
}


/////////////////People///////////////////////
class People{

private:
    int m_a;
    int m_b;
public:
    People(int b);
    void show();
};

inline void People::show(){

    cout<<m_a<<m_b<<endl;
    
}

inline People::People(int b):m_b(b),m_a(m_b){
//在参数初始化表中，我们将 m_b 放在了 m_a 的前面，看起来是先给 m_b 赋值，再给 m_a 赋值，其实不然！成员变量的赋值顺序由它们在类中的声明顺序决定，在 Demo 类中，我们先声明的 m_a，再声明的 m_b，所以构造函数和下面的代码等价
//    m_a = m_b;
//    m_b = b;
//   给 m_a 赋值时，m_b 还未被初始化，它的值是不确定的，所以输出的 m_a 的值是一个奇怪的数字；给 m_a 赋值完成后才给 m_b 赋值，此时 m_b 的值才是 100。
    
}

//初始化 const 成员变量
//参数初始化表还有一个很重要的作用，那就是初始化 const 成员变量。初始化 const 成员变量的唯一方法就是使用参数初始化表。例如 VS/VC 不支持变长数组（数组长度不能是变量），我们自己定义了一个 VLA 类，用于模拟变长数组，请看下面的代码：

class VLA{

private:
    const int m_len;
    int * m_arr;
public:
    VLA(int len);
    
};
//必须使用参数初始化表来初始化 m_len 不然会报错  VLA 类包含了两个成员变量，m_len 和 m_arr 指针，需要注意的是 m_len 加了 const 修饰，只能使用参数初始化表的方式赋值，如果写作下面的形式是错误的： 
inline VLA::VLA(int len):m_len(len){
    m_arr = new int[len];
}

