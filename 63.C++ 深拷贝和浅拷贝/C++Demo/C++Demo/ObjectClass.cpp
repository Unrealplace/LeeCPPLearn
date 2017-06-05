//
//  ObjectClass.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/5.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include "ObjectClass.hpp"

int Base::m_count = 0;

Base::Base(const Base & obj){//拷贝构造函数
    this ->m_a = obj.m_a;//在栈上分配的空间赋值
    this ->m_b = obj.m_b;
    this ->m_count++;
    this ->m_time = time((time_t * )NULL);
}

Array::Array(int len):m_len(len){

    m_p = (int *) calloc(len, sizeof(int));
    //功 能： 在内存的动态存储区中分配n个长度为size的连续空间，函数返回一个指向分配起始地址的指针；如果分配不成功，返回NULL。
//    与malloc的区别：
//    calloc在动态分配完内存后，自动初始化该内存空间为零，而malloc不初始化，里边数据是随机的垃圾数据。
    
}
Array::Array(const Array & arr){ //拷贝构造函数
    this ->m_len = arr.m_len;
    this ->m_p    = (int*)calloc(this ->m_len, sizeof(int));
    memcpy(this ->m_p, arr.m_p, arr.m_len * sizeof(int));//内存空间copy
}
Array::~Array(){
    free(m_p);
}

//本例中我们显式地定义了拷贝构造函数，它除了会将原有对象的所有成员变量拷贝给新对象，还会为新对象再分配一块内存，并将原有对象所持有的内存也拷贝过来。这样做的结果是，原有对象和新对象所持有的动态内存是相互独立的，更改一个对象的数据不会影响另外一个对象，本例中我们更改了 arr2 的数据，就没有影响 arr1。
//
//这种将对象所持有的其它资源一并拷贝的行为叫做深拷贝，我们必须显式地定义拷贝构造函数才能达到深拷贝的目的。

