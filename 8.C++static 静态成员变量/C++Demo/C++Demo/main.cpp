//
//  main.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/3.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <iostream>
#include "Student.cpp"
using namespace std;


// static 成员变量必须在类声明的外部初始化，具体形式为:
// 静态成员变量在初始化时不能再加 static，但必须要有数据类型。被 private、protected、public 修饰的静态成员变量都可以用这种方式初始化。
int Student::m_total = 0;

//注意：static 成员变量的内存既不是在声明类时分配，也不是在创建对象时分配，而是在（类外）初始化时分配。反过来说，没有在类外初始化的 static 成员变量不能使用。

//注意：static 成员变量不占用对象的内存，而是在所有对象之外开辟内存，即使不创建对象也可以访问。具体来说，static 成员变量和普通的 static 变量类似，都在内存分区中的全局数据区分配内存，不了解的读者请阅读《C语言和内存》专题。


int main(int argc, const char * argv[]) {
    
    //创建匿名对象
    (new Student("小明", 15, 90)) -> show();
    (new Student("李磊", 16, 80)) -> show();
    (new Student("张华", 16, 99)) -> show();
    (new Student("王康", 14, 60)) -> show();
    
    Student * pstu = new Student("oliver",45,66);
    pstu -> m_total = 6;
    
    Student::m_total = 9;
    
    pstu -> show();

//    本例中将 m_total 声明为静态成员变量，每次创建对象时，会调用构造函数使 m_total 的值加 1。
//    
//    之所以使用匿名对象，是因为每次创建对象后只会使用它的 show() 函数，不再进行其他操作。不过使用匿名对象无法回收内存，会导致内存泄露，在中大型程序中不建议使用。
    return 0;
    
    
//    几点说明
//    1) 一个类中可以有一个或多个静态成员变量，所有的对象都共享这些静态成员变量，都可以引用它。
//    
//    2) static 成员变量和普通 static 变量一样，都在内存分区中的全局数据区分配内存，到程序结束时才释放。这就意味着，static 成员变量不随对象的创建而分配内存，也不随对象的销毁而释放内存。而普通成员变量在对象创建时分配内存，在对象销毁时释放内存。
//    
//    3) 静态成员变量必须初始化，而且只能在类体外进行。例如：
//    
//    int Student::m_total = 10;
//    初始化时可以赋初值，也可以不赋值。如果不赋值，那么会被默认初始化为 0。全局数据区的变量都有默认的初始值 0，而动态数据区（堆区、栈区）变量的默认值是不确定的，一般认为是垃圾值。
//    
//    4) 静态成员变量既可以通过对象名访问，也可以通过类名访问，但要遵循 private、protected 和 public 关键字的访问权限限制。当通过对象名访问时，对于不同的对象，访问的是同一份内存。
//    
    
    
}
