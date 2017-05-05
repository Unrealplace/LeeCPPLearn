//
//  main.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/4.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <iostream>
#include "Test.hpp"

using namespace std;

void printDouble(const double& rd);
void printDouble(const double *pd);
void show(Test & test);

int main(int argc, const char * argv[]) {
    
    
//    条款一：指针与引用的区别
//    
//    指针与引用看上去完全不同（指针用操作符‘*’和‘->’，引用使用操作符‘。’），但是它们似乎有相同的功能。指针与引用都是让你间接引用其他对象。你如何决定在什么时候使用指针，在什么时候使用引用呢？
//    
//    首先，要认识到在任何情况下都不能用指向空值的引用。一个引用必须总是指向某些对象。因此如果你使用一个变量并让它指向一个对象，但是该变量在某些时候也可能不指向任何对象，这时你应该把变量声明为指针，因为这样你可以赋空值给该变量。相反，如果变量肯定指向一个对象，例如你的设计不允许变量为空，这时你就可以把变量声明为引用。
//    
//    “但是，请等一下”，你怀疑地问，“这样的代码会产生什么样的后果？”
//    
//    char *pc = 0；// 设置指针为空值
//    
//    char& rc = *pc；// 让引用指向空值
//    
//    这是非常有害的，毫无疑问。结果将是不确定的（编译器能产生一些输出，导致任何事情都有可能发生），应该躲开写出这样代码的人除非他们同意改正错误。如果你担心这样的代码会出现在你的软件里，那么你最好完全避免使用引用，要不然就去让更优秀的程序员去做。我们以后将忽略一个引用指向空值的可能性。
//    
//    因为引用肯定会指向一个对象，在C里，引用应被初始化。
//    
//    string& rs；// 错误，引用必须被初始化
//    string s（"xyzzy"）；
//    string& rs = s；// 正确，rs指向s
//    
//    指针没有这样的限制。
//    
//    string *ps；// 未初始化的指针
//    
//    // 合法但危险
//    
//    不存在指向空值的引用这个事实意味着使用引用的代码效率比使用指针的要高。因为在使用引用之前不需要测试它的合法性。
    
    
    string s1("Nancy");
    string s2("Clancy");
    string& rs = s1; // rs 引用 s1
    string *ps = &s1; // ps 指向 s1
    rs = s2; // rs 仍旧引用s1,
    // 但是 s1的值现在是
    // "Clancy"
    ps = &s2; // ps 现在指向 s2;
    // s1 没有改变
    
    double aaa = 145.555;
    
    printDouble(aaa);
    printDouble(&aaa);
    
    
////////// 一、const用于指针////////////////
    int m = 999;
    int n = 9999;
    const int * p ;
    int * const pp = nullptr;
    const int * const ppp = &m;
    p = &m;
    
//    pp = &m; 指针在一开始就要赋值，之后不能改变了。
//    *p = 199; 指针指向的值不能改变了。
//    *ppp = 666;
//     ppp  = &n;
//    ppp 的指向不能改变，ppp 的值不能改了
    
    
    Test test = Test(100);
    show(test);
    
    
    return 0;
}

void show(Test & test){

    test.print();
    
}

//不存在指向空值的引用这个事实意味着使用引用的代码效率比使用指针的要高。因为在使用引用之前不需要测试它的合法性。

void printDouble(const double& rd)
{
    cout << rd <<endl; // 不需要测试rd,它
} // 肯定指向一个double值
//相反，指针则应该总是被测试，防止其为空：
void printDouble(const double *pd)
{
    if (pd)
        
    { // 检查是否为NULL
        cout << *pd <<endl;
    }
}

//指针与引用的另一个重要的不同是指针可以被重新赋值以指向另一个不同的对象。但是引用则总是指向在初始化时被指定的对象，以后不能改变。


