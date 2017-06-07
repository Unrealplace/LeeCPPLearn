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
  
    
//    除了前面介绍的用于读取数据的成员函数外，istream类还有其他在输入数据时用得着的一些成员函数。
//    eof 函数
//    
//    eof是end of file的缩写，表示“文件结束”。从输入流读取数据，如果到达文件末尾(遇文件结束符)，eof函数值为非零值(真)，否则为0(假)。

//    [例13.8] 逐个读入一行字符，将其中的非空格字符输出。

//    char c;
//    while (!cin.eof()) {
//        if ((c = cin.get()) != ' ') {
//            cout.put(c);
//        }
//    }
//    
    cout<<"********************"<<endl;
    
//    peek函数
//    
//    peek是“观察”的意思，peek函数的作用是观测下一个字符。其调用形式为：
//    c=cin.peek( );
//    函数的返回值是指针指向的当前字符，但它只是观测，指针仍停留在当前位置，并不后移。如果要访问的字符是文件结束符，则函数值是EOF(-1)。
    
    
//    putback函数
//    
//    其调用形式为
//    cin.putback(ch);
//    其作用是将前面用get或getline函数从输入流中读取的字符ch返回到输入流，插入到当前指针位置，以供后面读取。
//    
//    [例13.9] peek函数和putback函数的用法。
    
    char c[20];
    int ch;
    cout<<"please enter a sentence:"<<endl;
    cin.getline(c,15,'/');
    cout<<"The first part is:"<<c<<endl;
    ch=cin.peek( );  //观看当前字符
    cout<<ch<<endl;
    cout<<"The next character(ASCII code) is:"<<ch<<endl;
    cin.putback(c[0]);  //将'I'插入到指针所指处
    cin.getline(c,15,'/');//从当前指针处开始往后找数据
    cout<<"The second part is:"<<c<<endl;
    cout<<"********************"<<endl;

//    please enter a sentence:
//    I am a boy./ am a student./
//    The first part is:I am a boy.
//    32
//    The next character(ASCII code) is:32
//    The second part is:I am a student
    
    
    
//    ignore函数
//    
//    其调用形式为
//    cin.ignore(n, 终止字符)
//    函数作用是跳过输入流中n个字符，或在遇到指定的终止字符时提前结束(此时跳过包括终止字符在内的若干字符)。如
//    ighore(5, 'A')  //跳过输入流中个字符，遇'A'后就不再跳了
//    也可以不带参数或只带一个参数。如
//    ignore( )  // n默认值为，终止字符默认为EOF
//    相当于
//    ignore(1, EOF)
//    
//    [例13.10] 用ignore函数跳过输入流中的字符。先看不用ignore函数的情况：
    
    
    char chh[20];
    cin.get(chh,20,'/');
    cout<<"The first part is:"<<chh<<endl;
    cin.ignore( );//跳过输入流中一个字符
    cin.get(chh,20,'/');
    cout<<"The second part is:"<<chh<<endl;
    cout<<"********************"<<endl;

    
    return 0;
}
