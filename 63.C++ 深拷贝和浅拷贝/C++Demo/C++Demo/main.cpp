//
//  main.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/4.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include <iostream>
#include "ObjectClass.hpp"

void printArray(const Array & arr){
    int len = arr.length();
    for (int i =0; i<len; i++) {
        if (i == len-1) {
            cout<<arr[i]<<endl;
        }else{
            cout<<arr[i]<<", ";
        }
    }
    
}
int main(int argc, const char * argv[]) {
   
    Array arr1(10);
    for (int i =0; i < 10; i++) {
        arr1[i] = i*10;
    }
    Array arr2 = arr1;
    arr2[6] = 10101;
    arr2[2] = 34434;
    
    printArray(arr1);
    printArray(arr2);
    
    cout << "**********************"<<endl;
    Base obj1(10,20);
    cout<<"obj1: count = "<<obj1.getCount()<<", time = "<<obj1.getTime()<<endl;
    sleep(3); //在Linux和Mac下要写作 sleep(3);
    Base obj2 = obj1;
    cout<<"obj2: count = "<<obj2.getCount()<<", time = "<<obj2.getTime()<<endl;
    
//obj1: count = 0, time = 140734799804208
//obj2: count = 1, time = 1496633036
    
//    运行程序，先输出第一行结果，等待 3 秒后再输出第二行结果。Base 类中的 m_time 和 m_count 分别记录了对象的创建时间和创建数目，它们在不同的对象中有不同的值，所以需要在初始化对象的时候提前处理一下，这样浅拷贝就不能胜任了，就必须使用深拷贝了。
    
    return 0;
}
