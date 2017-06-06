//
//  main.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/6.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;
class Complex{
public:
    Complex(double real = 0.0, double imag = 0.0): m_real(real), m_imag(imag){ }
public:
    operator double() const { return m_real; }  //类型转换函数
private:
    double m_real;
    double m_imag;
};

class M{
public:
    M(int a = 0, int b = 0): m_a(a), m_b(b){}
private:
    int m_a;
    int m_b;
};


class Base{
public:
    Base(int a = 0): m_a(a){ }
    int get_a() const{ return m_a; }
    virtual void func() const { }
protected:
    int m_a;
};
class Derived: public Base{
public:
    Derived(int a = 0, int b = 0): Base(a), m_b(b){ }
    int get_b() const { return m_b; }
private:
    int m_b;
};



class A{
public:
    virtual void func() const { cout<<"Class A"<<endl; }
private:
    int m_a;
};
class B: public A{
public:
    virtual void func() const { cout<<"Class B"<<endl; }
private:
    int m_b;
};
class C: public B{
public:
    virtual void func() const { cout<<"Class C"<<endl; }
private:
    int m_c;
};
class D: public C{
public:
    virtual void func() const { cout<<"Class D"<<endl; }
private:
    int m_d;
};


int main(int argc, const char * argv[]) {
   
//    static_cast 关键字
//    
//    static_cast 只能用于良性转换，这样的转换风险较低，一般不会发生什么意外，例如：
//    原有的自动类型转换，例如 short 转 int、int 转 double、const 转非 const、向上转型等；
//    void 指针和具体类型指针之间的转换，例如void *转int *、char *转void *等；
//    有转换构造函数或者类型转换函数的类与其它类型之间的转换，例如 double 转 Complex（调用转换构造函数）、Complex 转 double（调用类型转换函数）。
//    
//    需要注意的是，static_cast 不能用于无关类型之间的转换，因为这些转换都是有风险的，例如：
//    两个具体类型指针之间的转换，例如int *转double *、Student *转int *等。不同类型的数据存储格式不一样，长度也不一样，用 A 类型的指针指向 B 类型的数据后，会按照 A 类型的方式来处理数据：如果是读取操作，可能会得到一堆没有意义的值；如果是写入操作，可能会使 B 类型的数据遭到破坏，当再次以 B 类型的方式读取数据时会得到一堆没有意义的值。
//    int 和指针之间的转换。将一个具体的地址赋值给指针变量是非常危险的，因为该地址上的内存可能没有分配，也可能没有读写权限，恰好是可用内存反而是小概率事件。
//    
//    static_cast 也不能用来去掉表达式的 const 修饰和 volatile 修饰。换句话说，不能将 const/volatile 类型转换为非 const/volatile 类型。
//    
//    static_cast 是“静态转换”的意思，也就是在编译期间转换，转换失败的话会抛出一个编译错误。
    
    
    int m =100;
    Complex c(12.3,45.6);
    long n = static_cast<long>(m);//宽转换，没有信息丢失
    char ch = static_cast<char>(m);//窄转换，可能有信息丢失
    int * p1 = static_cast<int*>(malloc(10 * sizeof(int)));//将void指针转换为具体类型指针
    void *p2 = static_cast<void*>(p1);//将具体类型指针，转换成void类型指针
    double real = static_cast<double>(c);//调用类型转换函数
    free(p2);
//    free(p1);
    
    //下面的用法是错误的
//    float *p3 = static_cast<float*>(p1);  //不能在两个具体类型的指针之间进行转换
//    p3 = static_cast<float*>(0X2DF9);  //不能将整数转换为指针类型
    
    cout <<"***************************************"<<endl;
    
    
//    const_cast 关键字
//    
//    const_cast 比较好理解，它用来去掉表达式的 const 修饰或 volatile 修饰。换句话说，const_cast 就是用来将 const/volatile 类型转换为非 const/volatile 类型。
//    
//    下面我们以 const 为例来说明 const_cast 的用法：
    
    
    const int nn = 100;
    int *p = const_cast<int*>(&nn);
    *p = 234;
    cout<<"n = "<<nn<<endl;
    cout<<"*p = "<<*p<<endl;
    int mm = nn + 66;
    cout << mm <<endl;
    
//    运行结果：
//    n = 100
//    *p = 234
//    
//    &n用来获取 n 的地址，它的类型为const int *，必须使用 const_cast 转换为int *类型后才能赋值给 p。由于 p 指向了 n，并且 n 占用的是栈内存，有写入权限，所以可以通过 p 修改 n 的值。
//    
//    有读者可能会问，为什么通过 n 和 *p 输出的值不一样呢？这是因为 C++ 对常量的处理更像是编译时期的#define，是一个值替换的过程，代码中所有使用 n 的地方在编译期间就被替换成了 100。换句话说，第 67 行代码被修改成了下面的形式：
//    cout<<"n = "<<100<<endl;
//    这样以来，即使程序在运行期间修改 n 的值，也不会影响 cout 语句了。更多关于 const 的内容请猛击《C++中的const又玩出了新花样》。
//    
//    使用 const_cast 进行强制类型转换可以突破 C/C++ 的常数限制，修改常数的值，因此有一定的危险性；但是程序员如果这样做的话，基本上会意识到这个问题，因此也还有一定的安全性。
    cout <<"***************************************"<<endl;
    
//    reinterpret_cast 关键字
//    
//    reinterpret 是“重新解释”的意思，顾名思义，reinterpret_cast 这种转换仅仅是对二进制位的重新解释，不会借助已有的转换规则对数据进行调整，非常简单粗暴，所以风险很高。
//    
//    reinterpret_cast 可以认为是 static_cast 的一种补充，一些 static_cast 不能完成的转换，就可以用 reinterpret_cast 来完成，例如两个具体类型指针之间的转换、int 和指针之间的转换（有些编译器只允许 int 转指针，不允许反过来）。
//    
//    下面的代码代码演示了 reinterpret_cast 的使用：
//    纯文本复制
    //将 char* 转换为 float*
    char str[]="http://c.biancheng.net";
    float *p4 = reinterpret_cast<float*>(str);
    cout<<*p4<<endl;
    //将 int 转换为 int*
    int *p5 = reinterpret_cast<int*>(100);
    //将 A* 转换为 int*
    p5 = reinterpret_cast<int*>(new M(25, 96));
    cout<<*p5<<endl;
//    运行结果：
//    3.0262e+29
//    25
//    
//    可以想象，用一个 float 指针来操作一个 char 数组是一件多么荒诞和危险的事情，这样的转换方式不到万不得已的时候不要使用。将A*转换为int*，使用指针直接访问 private 成员刺穿了一个类的封装性，更好的办法是让类提供 get/set 函数，间接地访问成员变量。
    cout <<"***************************************"<<endl;
//    dynamic_cast 关键字
//    
//    dynamic_cast 用于在类的继承层次之间进行类型转换，它既允许向上转型（Upcasting），也允许向下转型（Downcasting）。向上转型是无条件的，不会进行任何检测，所以都能成功；向下转型的前提必须是安全的，要借助 RTTI 进行检测，所有只有一部分能成功。
//    
//    dynamic_cast 与 static_cast 是相对的，dynamic_cast 是“动态转换”的意思，static_cast 是“静态转换”的意思。dynamic_cast 会在程序运行期间借助 RTTI 进行类型转换，这就要求基类必须包含虚函数；static_cast 在编译期间完成类型转换，能够更加及时地发现错误。
//    
//    dynamic_cast 的语法格式为：
//    dynamic_cast <newType> (expression)
//    newType 和 expression 必须同时是指针类型或者引用类型。换句话说，dynamic_cast 只能转换指针类型和引用类型，其它类型（int、double、数组、类、结构体等）都不行。
//    
//    对于指针，如果转换失败将返回 NULL；对于引用，如果转换失败将抛出std::bad_cast异常。
//    1) 向上转型（Upcasting）
//    
//    向上转型时，只要待转换的两个类型之间存在继承关系，并且基类包含了虚函数（这些信息在编译期间就能确定），就一定能转换成功。因为向上转型始终是安全的，所以 dynamic_cast 不会进行任何运行期间的检查，这个时候的 dynamic_cast 和 static_cast 就没有什么区别了。
//    
//    「向上转型时不执行运行期检测」虽然提高了效率，但也留下了安全隐患，请看下面的代码：
    
    //情况①
    Derived *pd1 = new Derived(35, 78);
    Base *pb1 = dynamic_cast<Derived*>(pd1);//向上转型
    cout<<"pd1 = "<<pd1<<", pb1 = "<<pb1<<endl;
    cout<<pb1->get_a()<<endl;
    pb1->func();
    
    //情况②
    int k = 100;
    Derived *pd2 = reinterpret_cast<Derived*>(&k);
    Base *pb2 = dynamic_cast<Base*>(pd2);
    cout<<"pd2 = "<<pd2<<", pb2 = "<<pb2<<endl;
    cout<<pb2->get_a()<<endl;  //输出一个垃圾值
//    pb2->func();  //内存错误
    
    
//    情况①是正确的，没有任何问题。对于情况②，pd 指向的是整型变量 n，并没有指向一个 Derived 类的对象，在使用 dynamic_cast 进行类型转换时也没有检查这一点，而是将 pd 的值直接赋给了 pb（这里并不需要调整偏移量），最终导致 pb 也指向了 n。因为 pb 指向的不是一个对象，所以get_a()得不到 m_a 的值（实际上得到的是一个垃圾值），pb2->func()也得不到 func() 函数的正确地址。
//    pb2->func()得不到 func() 的正确地址的原因在于，pb2 指向的是一个假的“对象”，它没有虚函数表，也没有虚函数表指针，而 func() 是虚函数，必须到虚函数表中才能找到它的地址。
    cout <<"***************************************"<<endl;
//    2) 向下转型（Downcasting）
//    
//    向下转型是有风险的，dynamic_cast 会借助 RTTI 信息进行检测，确定安全的才能转换成功，否则就转换失败。那么，哪些向下转型是安全地呢，哪些又是不安全的呢？下面我们通过一个例子来演示：
    
    
    A *pa = new A();
    B *pb;
    C *pc;
    
    //情况①
    pb = dynamic_cast<B*>(pa);  //向下转型失败
    if(pb == NULL){
        cout<<"Downcasting failed: A* to B*"<<endl;
    }else{
        cout<<"Downcasting successfully: A* to B*"<<endl;
        pb -> func();
    }
    pc = dynamic_cast<C*>(pa);  //向下转型失败
    if(pc == NULL){
        cout<<"Downcasting failed: A* to C*"<<endl;
    }else{
        cout<<"Downcasting successfully: A* to C*"<<endl;
        pc -> func();
    }
    
    cout<<"-------------------------"<<endl;
    
    //情况②
    pa = new D();  //向上转型都是允许的
    pb = dynamic_cast<B*>(pa);  //向下转型成功
    if(pb == NULL){
        cout<<"Downcasting failed: A* to B*"<<endl;
    }else{
        cout<<"Downcasting successfully: A* to B*"<<endl;
        pb -> func();
    }
    pc = dynamic_cast<C*>(pa);  //向下转型成功
    if(pc == NULL){
        cout<<"Downcasting failed: A* to C*"<<endl;
    }else{
        cout<<"Downcasting successfully: A* to C*"<<endl;
        pc -> func();
    }
    
    cout <<"***************************************"<<endl;

//    关键字	说明
//    static_cast	用于良性转换，一般不会导致意外发生，风险很低。
//    const_cast	用于 const 与非 const、volatile 与非 volatile 之间的转换。
//    reinterpret_cast	高度危险的转换，这种转换仅仅是对二进制位的重新解释，不会借助已有的转换规则对数据进行调整，但是可以实现最灵活的 C++ 类型转换。
//    dynamic_cast	借助 RTTI，用于类型安全的向下转型（Downcasting）。
    
    cout <<"***************************************"<<endl;

    
    
    return 0;
}
