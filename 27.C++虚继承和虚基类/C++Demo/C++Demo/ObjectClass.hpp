//
//  ObjectClass.hpp
//  C++Demo
//
//  Created by MacBook on 2017/5/9.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#ifndef ObjectClass_hpp
#define ObjectClass_hpp

#include <stdio.h>

//虚继承（Virtual Inheritance）
//为了解决多继承时的命名冲突和冗余数据问题，C++ 提出了虚继承，使得在派生类中只保留一份间接基类的成员。

class A {

protected:
    int m_a;
    
};

class B:public A{

protected:
    int m_b;
};

class C:public A{

protected:
    int m_c;
    
};
class D:public B,public C{

public:
//    void seta(int a){
//        m_a = a;
//    } //这里会出错，菱形继承，不知道属于哪一个。
//    这段代码实现了上图所示的菱形继承，第 25 行代码试图直接访问成员变量 m_a，结果发生了错误，因为类 B 和类 C 中都有成员变量 m_a（从 A 类继承而来），编译器不知道选用哪一个，所以产生了歧义。
    
//     为了消除歧义，我们可以在 m_a 的前面指明它具体来自哪个类：
    
    void seta(int a){
    
        B::m_a = a;
    }
    void setb(int b){
        m_b = b;
    }
    void setc(int c){
        m_c = c;
    }
    void setd(int d){
        m_d = d;
    }
private:
    int m_d;
};



#endif /* ObjectClass_hpp */
