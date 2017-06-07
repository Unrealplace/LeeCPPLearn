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
//    1) 不带参数的get函数
//    其调用形式为
//    cin.get()
//    用来从指定的输入流中提取一个字符（包括空白字符），函数的返回值就是读入的字符。 若遇到输入流中的文件结束符，则函数值返回文件结束标志EOF(End Of File)，一般以-1代表EOF，用-1而不用0或正值，是考虑到不与字符的ASCII代码混淆，但不同的C ++系统所用的EOF值有可能不同。 ctrl+d 结束
    
//    int c;
//    cout << "enter a sentence:"<<endl;
//    while ((c = cin.get()) != EOF) {
//        cout.put(c);
//    }
    
//    运行情况如下：
//    enter a sentence:
//    I study C++ very hard.↙(输入一行字符)
//    I study C++ very hard.              (输出该行字符)
//C语言中的getchar函数与流成员函数cin.get( )的功能相同，C++保留了C的这种用法，可以用getchar(c)从键盘读入一个字符赋给c。
    
    cout<<"********************"<<endl;
//    2) 有一个参数的get函数
//    其调用形式为
//    cin.get(ch)
//    其作用是从输入流中读取一个字符，赋给字符变量ch。如果读取成功则函数返回true(真)，如失败(遇文件结束符) 则函数返回false(假)。
//    char cc;
//    cout<<"enter a sentence:"<<endl;
//    while(cin.get(cc))  //读取一个字符赋给字符变量c,如果读取成功,cin.get(c)为真
//    {
//        cout.put(cc);
//    }
//    cout<<"end"<<endl;
    
    cout<<"********************"<<endl;

//    3) 有3个参数的get函数
//    其调用形式为
//    cin.get(字符数组, 字符个数n, 终止字符)
//    或
//    cin.get(字符指针, 字符个数n, 终止字符)
//    其作用是从输入流中读取n-1个字符，赋给指定的字符数组(或字符指针指向的数组)，如果在读取n-1个字符之前遇到指定的终止字符，则提前结束读取。如果读取成功则函数返回true(真)，如失败(遇文件结束符) 则函数返回false(假)。
    char ch[20];
    cout<<"enter a sentence:"<<endl;
    cin.get(ch,10,'b');//指定换行符为终止字符
    cout<<ch<<endl;
    
//    enter a sentence:
//    I study C++ very hard.↙
//    I study
//    在输入流中有22个字符，但由于在get函数中指定的n为10，读取n -1个（即9个）字符并赋给字符数组ch中前9个元素。有人可能要问：指定n-10，为什么只读取9个字符呢？因为存放的是一个字符串，因此在9个字符之后要加入一个字符串结束标志，实际上存放到数组中的是10个字符。请读者思考：如果不加入字符串结束标志，会 出现什么情况？结果是：在用“cout<<ch”;输出数组中的字符时，不是输出读入的字符串，而是数组中的全部元素。大家可以亲自测试一下ch[9]（即数组中第10个元素）的值是什么。
    
    return 0;
}
