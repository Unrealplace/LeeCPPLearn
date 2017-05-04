//
//  main.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/4.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string s1;
    string s2 = "oliver lee";
    string s3 = s2;
    string s4(5,'b');
    
//    变量 s1 只是定义但没有初始化，编译器会将默认值赋给 s1，默认值是""，也即空字符串。
//    
//    变量 s2 在定义的同时被初始化为"c plus plus"。与C风格的字符串不同，string 的结尾没有结束标志'\0'。
//    
//    变量 s3 在定义的时候直接用 s2 进行初始化，因此 s3 的内容也是"c plus plus"。
//    
//    变量 s4 被初始化为由 5 个's'字符组成的字符串，也就是"sssss"。
    
    string s5 = "www.baidu.com.cn";
    unsigned long len = s5.length();
    cout << "s5---len::"<<len<<endl;
    
//    string 字符串的输入输出
//    string 类重载了输入输出运算符，可以像对待普通变量那样对待 string 变量，也就是用>>进行输入，用<<进行输出。请看下面的代码：
    
    string s6;
    cin >> s6;
    cout << s6<<endl;
    
//    访问字符串中的字符
//    string 字符串也可以像C风格的字符串一样按照下标来访问其中的每一个字符。string 字符串的起始下标仍是从 0 开始。请看下面的代码：
    
    string s7 = "oliver lee is a good boy!";
    for (int i = 0; i < s7.length(); i++) {
        cout<<s7[i]<<"\n"<<endl;
    }
    s7[5] = 'q';
    cout << s7 <<endl;
//    本例定义了一个 string 变量 s，并赋值 "oliver lee is a good boy"，之后用 for 循环遍历输出每一个字符。借助下标，除了能够访问每个字符，也可以修改每个字符，s[5] = '5';就将第6个字符修改为 '5'，所以 s 最后为 "oliveq lee is a good boy!"。
    
    
//    字符串的拼接
//    有了 string 类，我们可以使用+或+=运算符来直接拼接字符串，非常方便，再也不需要使用C语言中的 strcat()、strcpy()、malloc() 等函数来拼接字符串了，再也不用担心空间不够会溢出了。
//    
//    用+来拼接字符串时，运算符的两边可以都是 string 字符串，也可以是一个 string 字符串和一个C风格的字符串，还可以是一个 string 字符串和一个字符数组，或者是一个 string 字符串和一个单独的字符。请看下面的例子：
    
    
    string s8 = "oliver ";
    string s9 = "lee  ";
    char * s10 = "is ";
    char s11[] = "a good boy";
    char s12 = '!';
    
    string s13 = s8 + s9 + s10 + s11 + s12;
    
    cout << s13 << endl;
    
//    string 字符串的增删改查
//    C++ 提供的 string 类包含了若干实用的成员函数，大大方便了字符串的增加、删除、更改、查询等操作。
    
    string s14 ,s15,s16;
    s14 = s15 = "1234567890";
    s16 = "aaaa";
    
    s14.insert(3, s16);//插入
    cout << s14 << endl;
    
    s14.erase(3, s16.length());//删除
    cout << s14 <<endl;
    
    string s17 = s14.substr(3,3);//提取子字符串
    cout << s17 <<endl;
//    第一个参数为待查找的子字符串，它可以是 string 字符串，也可以是C风格的字符串。第二个参数为开始查找的位置（下标）；如果不指明，则从第0个字符开始查找
    
    string des = "456";
    unsigned long index = s15.find(des,2);
    cout << "find index::"<<index<<endl;
    
    string s20 = "first second second third";
    string s21 = "asecond";
    unsigned long ind = s20.find_first_of(s21);
    if(ind < s1.length())
        cout<<"Found at index : "<< ind <<endl;
    else
        cout<<"Not found"<<endl;
    
    
    
    return 0;
}
