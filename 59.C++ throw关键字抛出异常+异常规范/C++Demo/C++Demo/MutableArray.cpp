//
//  MutableArray.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/2.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include "MutableArray.hpp"

Array::Array(){
    m_p =(int*) malloc(sizeof(int) * m_stepSize);
    m_capacity = m_stepSize;
    m_len = 0;
}

int Array::operator[](int index) const {
    if( index<0 || index>=m_len ){  //判断是否越界
        throw OutOfRang(m_len, index);  //抛出异常（创建一个匿名对象）
    }
    return *(m_p + index);
}

int Array::push(int ele){
    if (m_len >= m_capacity) {//如果容量不足就扩容
        m_capacity+=m_stepSize;
        m_p = (int*)realloc(m_p, sizeof(int) * m_capacity);//扩容
    }
    *(m_p + m_len) = ele;
    m_len++;
    return m_len-1;
    
}
int Array::pop(){

    if (m_len == 0) {
        throw OutOfRang();// 抛出一个匿名对象
    }
    m_len--;
    return *(m_p + m_len);
}

void Array::printArray(Array &arr){//打印数组内容

    int len = arr.length();
    if (len == 0) {
        cout << "empty array,no elements to print" <<endl;
        return;
    }
    for (int i=0; i<len; i++) {
        if (i == len-1) {
            cout << arr[i]<<endl;
        }else{
            cout << arr[i] <<",  ";
        }
    }
}
