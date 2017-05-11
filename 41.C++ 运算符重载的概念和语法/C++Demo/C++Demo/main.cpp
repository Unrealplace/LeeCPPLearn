//
//  main.cpp
//  C++Demo
//
//  Created by LiYang on 17/5/11.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include <iostream>
#include "ObjectClass.hpp"


int main(int argc, const char * argv[]) {
   
    complex c1(2.3,3.5);
    complex c2(4.5,77.4);
    complex c3;
    complex c4;
    c3 = c1+c2;
    c3.display();
    c4 = c1 - c2;
    c4.displayCut();
    
//    小结
//    
//    虽然运算符重载所实现的功能完全可以用函数替代，但运算符重载使得程序的书写更加人性化，易于阅读。运算符被重载后，原有的功能仍然保留，没有丧失或改变。通过运算符重载，扩大了C++已有运算符的功能，使之能用于对象。
//
    
    return 0;
}
