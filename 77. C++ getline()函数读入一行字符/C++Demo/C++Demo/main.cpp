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
   
//    getline函数的作用是从输入流中读取一行字符,其用法与带3个参数的get函数类似。即
//    cin.getline(字符数组(或字符指针), 字符个数n, 终止标志字符)

    char ch[20];
    cout <<"enter a sentence:"<<endl;
    cin>>ch;
    cout <<"the string read with cin is:"<<ch<<endl;
    cin.getline(ch, 20, '/');//输入字符串 遇到／结束输入,输入超出20后没有任何用处了
    cout<<"the second part is :"<<ch<<endl;
    cin.getline(ch, 20);//
    cout<<"the third part is:"<<ch<<endl;
    
    
    
    
    return 0;
}
