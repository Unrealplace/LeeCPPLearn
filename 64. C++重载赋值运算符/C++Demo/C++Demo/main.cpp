//
//  main.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/5.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include <iostream>
#include "ObjectClass.hpp"
//打印数组元素
void printArray(const Array &arr){
    int len = arr.length();
    for(int i=0; i<len; i++){
        if(i == len-1){
            cout<<arr[i]<<endl;
        }else{
            cout<<arr[i]<<", ";
        }
    }
}
int main(int argc, const char * argv[]) {
  
    Array arr1(10);
    for (int i =0; i<arr1.length(); i++) {
        arr1[i] = i;
    }
    printArray(arr1);
    
    
    Array arr2(5);
    for (int i=0; i<arr2.length(); i++) {
        arr2[i] = i;
    }
    printArray(arr2);
    
    arr2 = arr1;//    arr2 = arr1;
    
    printArray(arr2);
    
    arr2[3] = 234;//修改arr2的数据不会影响arr1
    arr2[7] = 920;
    printArray(arr2);
    printArray(arr1);
    
    
    return 0;
}
