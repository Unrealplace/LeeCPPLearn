//
//  ObjectClass.hpp
//  C++Demo
//
//  Created by LiYang on 2017/6/2.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#ifndef ObjectClass_hpp
#define ObjectClass_hpp

#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

class OutOfRang{

private:
    int m_flag;//不同的flag表示不同的错误
    int m_len;//当前数组的长度
    int m_index;//当前使用的数组下标
public:
    void what() const;//获取具体的错误信息
public:
    OutOfRang():m_flag(1){};
    OutOfRang(int len,int index):m_len(len),m_index(index),m_flag(2){};
};


#endif /* ObjectClass_hpp */
