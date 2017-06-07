//
//  main.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/7.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
//    在程序中一般用cout和插入运算符“<<”实现输出，cout流在内存中有相应的缓冲区。有时用户还有特殊的输出要求，例如只输出一个字符。ostream类除了提供上面介绍过的用于格式控制的成员函数外，还提供了专用于输出单个字符的成员函数put。如：
//    cout.put('a');
//    调用该函数的结果是在屏幕上显示一个字符a。put函数的参数可以是字符或字符的ASCII代码(也可以是一个整型表达式)。如
//    cout.put(65 + 32);
//    也显示字符a，因为97是字符a的ASCII代码。
//    
//    可以在一个语句中连续调用put函数。如：
//    cout.put(71).put(79).put(79). put(68).put('\n');
//    在屏幕上显示GOOD。
//    
//    [例13.4] 有一个字符串"BASIC"，要求把它们按相反的顺序输出。
//    纯文本复制

    
    
//    成员函数put不仅可以用cout流对象来调用，而且也可以用ostream类的其他流对象调用。

    
    char a[] = "basic oliver lee";
    for (int i = (int)strlen(a); i >=0; i--) {
        cout.put(*(a + i));
        cout.put('\n');
    }
    
    cout << "******************"<<endl;
    char *aa="BASIC";
    for(int i=4;i>=0;i--)
        putchar(*(aa+i));
    putchar('\n');
    
    cout.put(66);
    
    putchar('\n');

    return 0;
}
