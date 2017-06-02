//
//  main.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/2.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include <iostream>
#include <exception>
using namespace std;


class Base{ };
class Derived: public Base{ };

int main(int argc, const char * argv[]) {
   
//    
//    exceptionType是异常类型，它指明了当前的 catch 可以处理什么类型的异常；variable是一个变量，用来接收异常信息。当程序抛出异常时，会创建一份数据，这份数据包含了错误信息，程序员可以根据这些信息来判断到底出了什么问题，接下来怎么处理。
//    
//    异常既然是一份数据，那么就应该有数据类型。C++ 规定，异常类型可以是 int、char、float、bool 等基本类型，也可以是指针、数组、字符串、结构体、类等聚合类型。C++ 语言本身以及标准库中的函数抛出的异常，都是 exception 类或其子类的异常。也就是说，抛出异常时，会创建一个 exception 类或其子类的对象。
//    
//    exceptionType variable和函数的形参非常类似，当异常发生后，会将异常数据传递给 variable 这个变量，这和函数传参的过程类似。当然，只有跟 exceptionType 类型匹配的异常数据才会被传递给 variable，否则 catch 不会接收这份异常数据，也不会执行 catch 块中的语句。换句话说，catch 不会处理当前的异常。
    

//    但是 catch 和真正的函数调用又有区别：
//    真正的函数调用，形参和实参的类型必须要匹配，或者可以自动转换，否则在编译阶段就报错了。
//    而对于 catch，异常是在运行阶段产生的，它可以是任何类型，没法提前预测，所以不能在编译阶段判断类型是否正确，只能等到程序运行后，真的抛出异常了，再将异常类型和 catch 能处理的类型进行匹配，匹配成功的话就“调用”当前的 catch，否则就忽略当前的 catch。
//    总起来说，catch 和真正的函数调用相比，多了一个「在运行阶段将实参和形参匹配」的过程。

    
    try{
        throw Derived();  //抛出自己的异常类型，实际上是创建一个Derived类型的匿名对象
        cout<<"This statement will not be executed."<<endl;
    }catch(int){
        cout<<"Exception type: int"<<endl;
    }catch(char *){
        cout<<"Exception type: cahr *"<<endl;
    }catch(Base){  //匹配成功（向上转型）
        cout<<"Exception type: Base"<<endl;
    }catch(Derived){
        cout<<"Exception type: Derived"<<endl;
    }
   
    
    
    int nums[] = {1, 2, 3};
    try{
        throw nums;
        cout<<"This statement will not be executed."<<endl;
    }catch(float a   ){
    
        cout<<"Exception type: const a  "<<endl;
  
    }
    catch(const char *){
        cout<<"Exception type: const char *"<<endl;
    }
    catch(const int *){
        cout<<"Exception type: const int *"<<endl;
        
    }


    return 0;
}
