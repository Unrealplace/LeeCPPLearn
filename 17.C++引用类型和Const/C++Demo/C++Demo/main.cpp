//
//  main.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/5.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <iostream>
#include "Test.hpp"

using namespace std;
void printDouble(const double& rd);
void printDouble(const double *pd);
void show(Test & test);

//不存在指向空值的引用这个事实意味着使用引用的代码效率比使用指针的要高。因为在使用引用之前不需要测试它的合法性。
void printDouble(const double& rd)
{
    cout << rd <<endl; // 不需要测试rd,肯定指向一个double值
}
//相反，指针则应该总是被测试，防止其为空：
void printDouble(const double *pd)
{
    if (pd)
        
    { // 检查是否为NULL
        cout << *pd <<endl;
    }
}
//指针与引用的另一个重要的不同是指针可以被重新赋值以指向另一个不同的对象。但是引用则总是指向在初始化时被指定的对象，以后不能改变。
void show(Test & test){
    
    test.print();
    
}

int main(int argc, const char * argv[]) {
   
    
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

    return 0;
}
