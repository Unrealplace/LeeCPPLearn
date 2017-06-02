//
//  main.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/2.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include <iostream>
#include "MutableArray.hpp"


void func()throw(char*,exception){

    throw 1000;
    cout << "error"<<endl;
    
}


int main(int argc, const char * argv[]) {
   
    Array nums;
    
    for (int i =0; i<10; i++) {
        nums.push(i);
    }
    nums.printArray(nums);
    
    try {
        cout << nums[20]<<endl;
    } catch (OutOfRang &e) {
        e.what();
    }
    
    try {
        for (int i =0; i < 12; i++) {
            nums.pop();
        }
    } catch (OutOfRang &e) {
        e.what();
    }
    nums.printArray(nums);
    
//    0,  1,  2,  3,  4,  5,  6,  7,  8,  9
//    Error: out of range( array length 10, access index 20 )
//    error  array,no elements to pop.
//    empty array,no elements to print

    
    
//    Array 类实现了动态数组，它的主要思路是：在创建对象时预先分配出一定长度的内存（通过 malloc() 分配），内存不够用时就再扩展内存（通过 realloc() 重新分配）。Array 数组只能在尾部一个一个地插入（通过 push() 插入）或删除（通过 pop() 删除）元素。
//    
//    我们通过重载过的[ ]运算符来访问数组元素，如果下标过小或过大，就会抛出异常（第53行代码）；在抛出异常的同时，我们还记录了当前数组的长度和要访问的下标。
//    
//    在使用 pop() 删除数组元素时，如果当前数组为空，也会抛出错误。
    
    
    
    
    try{
//        func();
    }catch(int ){
    
        cout << "exception int"<<endl;
        
    }
    
//    在 GCC 下，这段代码运行到第 7 行时程序会崩溃。虽然 func() 函数中发生了异常，但是由于 throw 限制了函数只能抛出 char*、exception 类型的异常，所以 try-catch 将捕获不到异常，只能交给系统处理，终止程序。
//    
//    在 Visual C++ 下，输出结果为Exception type: int，这说明异常被成功捕获了。在 Visual C++ 中使用异常规范虽然没有语法错误，但是也没有任何效果，Visual C++ 会直接忽略异常规范的限制，函数可以抛出任何类型的异常。
    
    return 0;
}
