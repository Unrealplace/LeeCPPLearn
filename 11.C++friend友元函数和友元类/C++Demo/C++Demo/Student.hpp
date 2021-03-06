//
//  Student.hpp
//  C++Demo
//
//  Created by MacBook on 2017/5/4.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

//一个类中可以有 public、protected、private 三种属性的成员，通过对象可以访问 public 成员，只有本类中的函数可以访问本类的 private 成员。现在，我们来介绍一种例外情况——友元（friend）。借助友元（friend），可以使得其他类中的成员函数以及全局范围内的函数访问当前类的 private 成员。
//
//fnend 的意思是朋友，或者说是好友，与好友的关系显然要比一般人亲密一些。我们会对好朋友敞开心扉，倾诉自己的秘密，而对一般人会谨言慎行，潜意识里就自我保护。在C++中，这种友好关系可以用 friend 关键字指明，中文多译为“友元”，借助友元可以访问与其有好友关系的类中的私有成员。如果你对“友元”这个名词不习惯，可以按原文 friend 理解为朋友。
//友元函数
//在当前类以外定义的、不属于当前类的函数也可以在类中声明，但要在前面加 friend 关键字，这样就构成了友元函数。友元函数可以是不属于任何类的非成员函数，也可以是其他类的成员函数。
//
//友元函数可以访问当前类中的所有成员，包括 public、protected、private 属性的。

class Address; //提前声明Address类

class Student{

public:
    Student(char*name,int age,float score);
public:
    friend void show(Student *pstu);
    void showAddr(Address *addr);
private:
    char*m_name;
    int m_age;
    float m_score;
    
};


//本例定义了两个类 Student 和 Address，程序第 27 行将 Student 类的成员函数 show() 声明为 Address 类的友元函数，由此，show() 就可以访问 Address 类的 private 成员变量了。
//
//几点注意：
//① 程序第 4 行对 Address 类进行了提前声明，是因为在 Address 类定义之前、在 Student 类中使用到了它，如果不提前声明，编译器会报错，提示'Address' has not been declared。类的提前声明和函数的提前声明是一个道理。
//
//② 程序将 Student 类的声明和实现分开了，而将 Address 类的声明放在了中间，这是因为编译器从上到下编译代码，show() 函数体中用到了 Address 的成员 province、city、district，如果提前不知道 Address 的具体声明内容，就不能确定 Address 是否拥有该成员（类的声明中指明了类有哪些成员）。
//
//这里简单介绍一下类的提前声明。一般情况下，类必须在正式声明之后才能使用；但是某些情况下（如上例所示），只要做好提前声明，也可以先使用。
//
//但是应当注意，类的提前声明的使用范围是有限的，只有在正式声明一个类以后才能用它去创建对象。如果在上面程序的第4行之后增加如下所示的一条语句，编译器就会报错：
//
//Address addr;  //企图使用不完整的类来创建对象
//因为创建对象时要为对象分配内存，在正式声明类之前，编译器无法确定应该为对象分配多大的内存。编译器只有在“见到”类的正式声明后（其实是见到成员变量），才能确定应该为对象预留多大的内存。在对一个类作了提前声明后，可以用该类的名字去定义指向该类型对象的指针变量（本例就定义了 Address 类的指针变量）或引用变量（后续会介绍引用），因为指针变量和引用变量本身的大小是固定的，与它所指向的数据的大小无关。

class Dog;

class Address{
private:
    char * m_province;
    char * m_city;
    char * m_district;
public:
    friend class Dog; //将dog类声明为address 的友元类。
public:
    Address(char*province,char*city,char*district);
    friend void Student::showAddr(Address *addr); //将Student类中的成员函数showAddr()声明为友元函数
};

class Dog{

public:
    Dog(char *name,int age);
private:
    char * m_name;
    int m_age;
public:
    void showDog();
    
};

//关于友元，有两点需要说明：
//
//友元的关系是单向的而不是双向的。如果声明了类 B 是类 A 的友元类，不等于类 A 是类 B 的友元类，类 A 中的成员函数不能访问类 B 中的 private 成员。
//友元的关系不能传递。如果类 B 是类 A 的友元类，类 C 是类 B 的友元类，不等于类 C 是类 A 的友元类。
//
//
//除非有必要，一般不建议把整个类声明为友元类，而只将某些成员函数声明为友元函数，这样更安全一些。

#endif /* Student_hpp */
