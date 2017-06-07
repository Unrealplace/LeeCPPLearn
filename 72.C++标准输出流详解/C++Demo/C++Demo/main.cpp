//
//  main.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/7.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
  
//    
//    标准输出流是流向标准输出设备(显示器)的数据。ostream类定义了个输出流对象，即cout、cerr、clog，分述如下。
//    cout流对象
//    
//    cont是console output的缩写，意为在控制台（终端显示器）的输出。前边已对cout作了一些介绍（详情请查看：与C++输入输出有关的类和对象），在此再强调几点。
//    
//    1) cout不是C++预定义的关键字，它是ostream流类的对象，在iostream中定义。 顾名思义，流是流动的数据，cout流是流向显示器的数据。cout流中的数据是用流插入运算符“<<”顺序加入的。如果有
//    cout<<"I "<<"study C++ "<<"very hard.";
//    按顺序将字符串"I ", "study C++ ", "very hard."插人到cout流中，cout就将它们送到显示器，在显示器上输出字符串"I study C++ very hard."。cout流是容纳数据的载体，它并不是一个运算符。人们关心的是cout流中的内容，也就是向显示器输出什么。
//    
//    2)用“ccmt<<”输出基本类型的数据时，可以不必考虑数据是什么类型，系统会判断数据的类型，并根据其类型选择调用与之匹配的运算符重载函数。这个过程都是自动的，用户不必干预。如果在C语言中用prinf函数输出不同类型的数据，必须分别指定相应的输出格式符，十分麻烦，而且容易出错。C++的I/O机制对用户来说，显然是方便而安全的。
//    
//    3) cout流在内存中对应开辟了一个缓冲区，用来存放流中的数据，当向cout流插 人一个endl时，不论缓冲区是否已满，都立即输出流中所有数据，然后插入一个换行符， 并刷新流（清空缓冲区）。注意如果插人一个换行符”\n“（如cout<<a<<"\n"），则只输出和换行，而不刷新cout流(但并不是所有编译系统都体现出这一区别）。
//                                                                                                                                                      
//                                                                                                                                                      4) 在iostream中只对"<<"和">>"运算符用于标准类型数据的输入输出进行了重载，但未对用户声明的类型数据的输入输出进行重载。如果用户声明了新的类型，并希望用"<<"和">>"运算符对其进行输入输出，应该按照前面介绍的方法（详情请查看：C++运算符重载），对"<<"和">>"运算符另作重载。
//    cerr流对象
//    
//    cerr流对象是标准错误流，cerr流已被指定为与显示器关联。cerr的作用是向标准错误设备(standard error device)输出有关出错信息。cerr与标准输出流cout的作用和用法差不多。但有一点不同：cout流通常是传送到显示器输出，但也可以被重定向输出到磁盘文件，而cerr流中的信息只能在显示器输出。当调试程序时，往往不希望程序运行时的出错信息被送到其他文件，而要求在显示器上及时输出，这时应该用cerr。cerr流中的信息是用户根据需要指定的。
//    
//    [例13.1] 有一元二次方程ax2+bx+c=0，其一般解为
//    
//    但若a=0，或b2-4ac<0时，用此公式出错。
//    
//    编程序，从键盘输入a、b、c的值，求x1和x2。如果a=0或b2-4ac<0，输出出错信息。
//    
    
    
    float a,b,c,disc;
    cout<<"please input a,b,c:";
    cin>>a>>b>>c;
    if (a==0)
        cerr<<"a is equal to zero,error!"<<endl;
    //将有关出错信息插入cerr流,在屏幕输出
    else
        if ((disc=b*b-4*a*c)<0)
            cerr<<"disc=b*b-4*a*c<0"<<endl;   //将有关出错信息插入cerr流,在屏幕输出
        else{
            cout<<"x1="<<(-b+sqrt(disc))/(2*a)<<endl;
            cout<<"x2="<<(-b-sqrt(disc))/(2*a)<<endl;
        }
    
//    clog流对象
//    
//    clog流对象也是标准错误流，它是console log的缩写。它的作用和cerr相同，都是在终端显示器上显示出错信息。区别：cerr是不经过缓冲区，直接向显示器上输出有关信息，而clog中的信息存放在缓冲区中，缓冲区满后或遇endl时向显示器输出。
    
    return 0;
}
