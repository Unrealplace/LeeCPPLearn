//
//  main.cpp
//  C++Demo
//
//  Created by LiYang on 2017/5/31.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include <iostream>
#include "Array.hpp"

int main(int argc, const char * argv[]) {
  
    int n;
    cin>>n;
    Array A(n);
    for (int i = 0 ,len = A.length(); i < len;i++) {
        A[i] = i * 5;
    }
    A.display();
    
    
    
    const Array B(n);
//    B[n-1] = 100; 不能进行赋值操作。。。
    cout << B[n-1]<<endl; // 这块内存暂时没有数据没有像上面那样赋值
//    5
//    0, 5, 10, 15, 20
//    -1507196926
    
    
    return 0;
}
