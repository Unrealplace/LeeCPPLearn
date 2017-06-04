//
//  main.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/2.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include <iostream>
#include  <string>
#include <exception>

using namespace std;
void func();

int main(int argc, const char * argv[]) {
   
    string str = "http://c.biancheng.net";
    
    try{
        char ch1 = str[100];
        cout<<ch1<<endl;
    }catch(exception e){
        cout<<"[1]out of bound!"<<endl;
    }
    
    
    try{
        char ch2 = str.at(100);
        cout<<ch2<<endl;
    }catch(exception &e){  //exception类位于<exception>头文件中
        cout<<"[2]out of bound!"<<endl;
    }

    try{
        throw "Unknown Exception";  //抛出异常
        cout<<"This statement will not be executed."<<endl;
    }catch(const char* &e){
        cout<<e<<endl;
    }
    
    
    try {
        func();
    } catch (const char* &e) {
        cout << e << endl;
    }
    
    
    
//    说得直接一点，检测到异常后程序的执行流会发生跳转，从异常点跳转到 catch 所在的位置，位于异常点之后的、并且在当前 try 块内的语句就都不会再执行了；即使 catch 语句成功地处理了错误，程序的执行流也不会再回退到异常点，所以这些语句永远都没有执行的机会了。本例中，第 18 行代码就是被跳过的代码。
//    
//    执行完 catch 块所包含的代码后，程序会继续执行 catch 块后面的代码，就恢复了正常的执行流。
    
    return 0;
}


void func(){

    throw "error unkonwn exception";
    
}

