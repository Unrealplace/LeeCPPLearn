//
//  main.cpp
//  C++Demo
//
//  Created by LiYang on 17/5/9.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include <iostream>
#include "Base.hpp"

int main(int argc, const char * argv[]) {
  
    Base *p = new Derived();
    p -> func();  //输出void Derived::func()
    p -> func(10);  //输出void Base::func(int)
    
//    p -> func("http://c.biancheng.net");  //compile error
//    在基类 Base 中我们将void func()声明为虚函数，这样派生类 Derived 中的void func()就会自动成为虚函数。p 是基类 Base 的指针，但是指向了派生类 Derived 的对象。
//    
//    语句p -> func();调用的是派生类的虚函数，构成了多态。
//    
//    语句p -> func(10);调用的是基类的虚函数，因为派生类中没有函数遮蔽它。
//    
//    语句p -> func("http://c.biancheng.net");出现编译错误，因为通过基类的指针只能访问从基类继承过去的成员，不能访问派生类新增的成员。

    

    return 0;
}
