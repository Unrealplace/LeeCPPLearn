//
//  main.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/3.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <iostream>
#include "VLA.cpp"

int main(int argc, const char * argv[]) {

   
    int n;
    cout << "input array length::" <<endl;
    cin >> n;
    VLA * parr = new VLA(n);
    //输入数组元素
    cout<<"Input "<<n<<" numbers: ";
    parr -> input();
    //输出数组元素
    cout<<"Elements: ";
    parr -> show();
    //删除数组（对象）
    delete parr;
    
    
    return 0;
}
