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
#include <iostream>
using namespace std;

//在虚继承中，虚基类是由最终的派生类初始化的，换句话说，最终派生类的构造函数必须要调用虚基类的构造函数。对最终的派生类来说，虚基类是间接基类，而不是直接基类。这跟普通继承不同，在普通继承中，派生类构造函数中只能调用直接基类的构造函数，不能调用间接基类的。
//
//下面我们以菱形继承为例来演示构造函数的调用：
class A{

public:
    A(int a){
        m_a = a;
    }
protected:
    int m_a;
};
class B:virtual public A{

public:
    B(int a,int b):A(a){
        
        m_b = b;
    }
    void display(){
    
     cout<<"m_a="<<m_a<<", m_b="<<m_b<<endl;
    }
protected:
    int m_b;
    
};

class C:virtual public A{

public:
    C(int a,int c):A(a){
        m_c = c;
        cout <<"m_a:::" <<m_a << endl;
    }
    void display(){
    
        cout<<"m_a="<<m_a<<", m_c="<<m_c<<endl;
    }
protected:
    int m_c;
    
};

class D:public B,public C{

public:
    D(int a, int b, int c, int d):A(a),B(90,b),C(100,c),m_d(d){}
public:
    void display(){
        cout<<"m_a="<<m_a<<", m_b="<<m_b<<", m_c="<<m_c<<", m_d="<<m_d<<endl;
    }
private:
    int m_d;
};

//请注意第 50 行代码，在最终派生类 D 的构造函数中，除了调用 B 和 C 的构造函数，还调用了 A 的构造函数，这说明 D 不但要负责初始化直接基类 B 和 C，还要负责初始化间接基类 A。而在以往的普通继承中，派生类的构造函数只负责初始化它的直接基类，再由直接基类的构造函数初始化间接基类，用户尝试调用间接基类的构造函数将导致错误。
//
//现在采用了虚继承，虚基类 A 在最终派生类 D 中只保留了一份成员变量 m_a，如果由 B 和 C 初始化 m_a，那么 B 和 C 在调用 A 的构造函数时很有可能给出不同的实参，这个时候编译器就会犯迷糊，不知道使用哪个实参初始化 m_a。
//
//为了避免出现这种矛盾的情况，C++ 干脆规定必须由最终的派生类 D 来初始化虚基类 A，直接派生类 B 和 C 对 A 的构造函数的调用是无效的。在第 50 行代码中，调用 B 的构造函数时试图将 m_a 初始化为 90，调用 C 的构造函数时试图将 m_a 初始化为 100，但是输出结果有力地证明了这些都是无效的，m_a 最终被初始化为 50，这正是在 D 中直接调用 A 的构造函数的结果。
//
//另外需要关注的是构造函数的执行顺序。虚继承时构造函数的执行顺序与普通继承时不同：在最终派生类的构造函数调用列表中，不管各个构造函数出现的顺序如何，编译器总是先调用虚基类的构造函数，再按照出现的顺序调用其他的构造函数；而对于普通继承，就是按照构造函数出现的顺序依次调用的。
//
//修改本例中第 50 行代码，改变构造函数出现的顺序：
//
//D::D(int a, int b, int c, int d): B(90, b), C(100, c), A(a), m_d(d){ }
//
//虽然我们将 A() 放在了最后，但是编译器仍然会先调用 A()，然后再调用 B()、C()，因为 A() 是虚基类的构造函数，比其他构造函数优先级高。如果没有使用虚继承的话，那么编译器将按照出现的顺序依次调用 B()、C()、A()。




#endif /* ObjectClass_hpp */
