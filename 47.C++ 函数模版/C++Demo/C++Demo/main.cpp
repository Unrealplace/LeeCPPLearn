//
//  main.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/1.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include <iostream>
using namespace std;

//我们知道，数据的值可以通过函数参数传递，在函数定义时数据的值是未知的，只有等到函数调用时接收了实参才能确定其值。这就是值的参数化。
//
//在C++中，数据的类型也可以通过参数来传递，在函数定义时可以不指明具体的数据类型，当发生函数调用时，编译器可以根据传入的实参自动推断数据类型。这就是类型的参数化。
//
//值（Value）和类型（Type）是数据的两个主要特征，它们在C++中都可以被参数化。
//
//所谓函数模板，实际上是建立一个通用函数，它所用到的数据的类型（包括返回值类型、形参类型、局部变量类型）可以不具体指定，而是用一个虚拟的类型来代替（实际上是用一个标识符来占位），等发生函数调用时再根据传入的实参来逆推出真正的类型。这个通用函数就称为函数模板（Function Template）。
//
//在函数模板中，数据的值和类型都被参数化了，发生函数调用时编译器会根据传入的实参来推演形参的值和类型。换个角度说，函数模板除了支持值的参数化，还支持类型的参数化。
//
//一但定义了函数模板，就可以将类型参数用于函数定义和函数声明了。说得直白一点，原来使用 int、float、char 等内置类型的地方，都可以用类型参数来代替。

template<typename T>void Swap(T * a,T*b){
    
    T temp = *a;
    *a = *b;
    *b = temp;
    
}
template<class T> void Swap2(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}
//声明函数模板
template<typename T> T themax(T a, T b, T c);
//
//template <typename 类型参数1 , typename 类型参数2 , ...> 返回值类型  函数名(形参列表){
//    //在函数体中可以使用类型参数
//}
//类型参数可以有多个，它们之间以逗号,分隔。类型参数列表以< >包围，形式参数列表以( )包围。
//
//typename关键字也可以使用class关键字替代，它们没有任何区别。C++ 早期对模板的支持并不严谨，没有引入新的关键字，而是用 class 来指明类型参数，但是 class 关键字本来已经用在类的定义中了，这样做显得不太友好，所以后来 C++ 又引入了一个新的关键字 typename，专门用来定义类型参数。不过至今仍然有很多代码在使用 class 关键字，包括 C++ 标准库、一些开源程序等。

int main(int argc, const char * argv[]) {
   
    //交换 int 变量的值
    int n1 = 100, n2 = 200;
    Swap(&n1, &n2);
    cout<<n1<<", "<<n2<<endl;
    
    //交换 float 变量的值
    float f1 = 12.5, f2 = 56.93;
    Swap(&f1, &f2);
    Swap2(f1, f2);
    cout<<f1<<", "<<f2<<endl;
    
    //交换 char 变量的值
    char c1 = 'A', c2 = 'B';
    Swap(&c1, &c2);
    cout<<c1<<", "<<c2<<endl;
    
    //交换 bool 变量的值
    bool b1 = false, b2 = true;
    Swap(&b1, &b2);
    cout<<b1<<", "<<b2<<endl;
    
    
    //求三个整数的最大值
    int i1, i2, i3, i_max;
    cin >> i1 >> i2 >> i3;
    i_max = themax(i1,i2,i3);
    cout << "i_max=" << i_max << endl;
    //求三个浮点数的最大值
    double d1, d2, d3, d_max;
    cin >> d1 >> d2 >> d3;
    d_max = themax(d1,d2,d3);
    cout << "d_max=" << d_max << endl;
    //求三个长整型数的最大值
    long g1, g2, g3, g_max;
    cin >> g1 >> g2 >> g3;
    g_max = themax(g1,g2,g3);
    cout << "g_max=" << g_max << endl;
    return 0;
}
//定义函数模板
template<typename T>  //模板头，这里不能有分号
T themax(T a, T b, T c){ //函数头
    return (a > b?a:c) > c?(a > b?a:c):c;
}
//函数模板也可以提前声明，不过声明时需要带上模板头，并且模板头和函数定义（声明）是一个不可分割的整体，它们可以换行，但中间不能有分号。



