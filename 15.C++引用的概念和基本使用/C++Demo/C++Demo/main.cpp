//
//  main.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/4.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <iostream>

using namespace std;

//引用作为函数参数
//在定义或声明函数时，我们可以将函数的形参指定为引用的形式，这样在调用函数时就会将实参和形参绑定在一起，让它们都指代同一份数据。如此一来，如果在函数体中修改了形参的数据，那么实参的数据也会被修改，从而拥有“在函数内部影响函数外部数据”的效果。
//
//至于实参和形参是如何绑定的，我们将在下节《引用在本质上是什么，它和指针到底有什么区别》中讲解，届时我们会一针见血地阐明引用的本质。
//
//一个能够展现按引用传参的优势的例子就是交换两个数的值，请看下面的代码：

void swap1(int a,   int b);
void swap2(int *p1, int *p2);
void swap3(int &a,  int &b);


int &plusk(int &n);

int &plusk(int &n){

    n = n+100;
    return n;
}
int &addk(int &n);

int &addk(int &n){
 
    int k = n + 100;
    int &m = k;
    return m;//返回局部变量的引用会有问题。
    
//在将引用作为函数返回值时应该注意一个小问题，就是不能返回局部数据（例如局部变量、局部对象、局部数组等）的引用，因为当函数调用完成后局部数据就会被销毁，有可能在下次使用时数据就不存在了，C++ 编译器检测到该行为时也会给出警告。
    
}

int main(int argc, const char * argv[]) {
    
//    引用（Reference）是 C++ 相对于C语言的又一个扩充。引用可以看做是数据的一个别名，通过这个别名和原来的名字都能够找到这份数据。引用类似于 Windows 中的快捷方式，一个可执行程序可以有多个快捷方式，通过这些快捷方式和可执行程序本身都能够运行程序；引用还类似于人的绰号（笔名），使用绰号（笔名）和本名都能表示一个人。
//    
//    引用的定义方式类似于指针，只是用&取代了*，语法格式为：
//    
//    type &name = data;
//    type 是被引用的数据的类型，name 是引用的名称，data 是被引用的数据。引用必须在定义的同时初始化，并且以后也要从一而终，不能再引用其它数据，这有点类似于常量（const 变量）。
    
    
    int a = 99;
    int &b = a;
    
    a = 10009;
    cout<<a<<", "<<b<<endl;
    cout<<&a<<", "<<&b<<endl;
    
    
    b = 919191;
    cout<<a<<", "<<b<<endl;
    cout<<&a<<", "<<&b<<endl;
    
    
//    99, 99
//    0x7fff5fbff6fc, 0x7fff5fbff6fc
    
//    本例中，变量 b 就是变量 a 的引用，它们用来指代同一份数据；也可以说变量 b 是变量 a 的另一个名字。从输出结果可以看出，a 和 b 的地址一样，都是0x28ff44；或者说地址为0x28ff44的内存有两个名字，a 和 b，想要访问该内存上的数据时，使用哪个名字都行。
//    
//    注意，引用在定义时需要添加&，在使用时不能添加&，使用时添加&表示取地址。如上面代码所示，第 6 行中的&表示引用，第 8 行中的&表示取地址。除了这两种用法，&还可以表示位运算中的与运算。
   
//    如果读者不希望通过引用来修改原始的数据，那么可以在定义时添加 const 限制，形式为：
//    
//    const type &name = value;
//    也可以是：
//    
//    type const &name = value;
//    这种引用方式为常引用

    int m = 999;
   const int &n = m;
   int const &y = m;
    
    
    //开始测试三种交换函数。

    int qq = 123;
    int pp = 345;
    
    int q = 123;
    int p = 345;
    
    swap1(qq, pp);
    swap2(&qq, &pp);
    swap3(q, p);

    
    cout << q << p << endl;
    
    int ooo = 99;
    int &kkk = plusk(ooo);
    int &jjj = addk(ooo);
    int www  = plusk(ooo);
    
    cout << kkk <<"  "<< jjj << "  "<< www <<endl;
    
    

    return 0;
}

//直接传递参数内容
void swap1(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
//传递指针
void swap2(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
//按引用传参
void swap3(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    cout << a << b << endl;
}
