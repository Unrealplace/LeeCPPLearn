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
  
    
    int a,b;
    cin>>a>>b;
    
    
    
//    当遇到无效字符或遇到文件结束符（不是换行符，是文件中的数据已读完）时，输入流cin就处于出错状态，即无法正常提取数据。此时对cin流的所有提取操作将终止。在 IBM PC及其兼容机中，以Ctrl + Z表示文件结束符。在UNIX和Macintosh系统中，以 Ctrl + D表示文件结束符。当输入流cin处于出错状态时，如果测试cin的值，可以发现它的值为false(假)，即cin为0值。如果输入流在正常状态，cin的值为true(真)，即cin为 一个非0值。可以通过测试cin的值，判断流对象是否处于正常状态和提取操作是否成功。如：
//    if(!cn) //流cin处于出销状态，无法正常提取数据
//        cout<<"error";
    
    float grade;
    cout<<"enter grade:";
    while(cin>>grade)//能从cin流读取数据
    {
        if(grade>=85) cout<<grade<<"GOOD!"<<endl;
        if(grade<60) cout<<grade<<"fail!"<<endl;
        cout<<"enter grade:";
    }
    cout<<"The end."<<endl;
//    在不同的C++系统下运行此程序，在最后的处理上有些不同。以上是在GCC环境下运行程序的结果，如果在VC++环境（笔者使用win7系统）下运行此程序，在键入Ctrl + Z 时，需要敲击两次回车，程序才输出"The end."。

    
    return 0;
}
