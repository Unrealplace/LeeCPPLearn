//
//  main.cpp
//  C++Demo
//
//  Created by LiYang on 17/5/10.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include <iostream>
#include <typeinfo>
using namespace std;

class Base{

};
struct STU{

};
class Derived:public Base{
};

int main(int argc, const char * argv[]) {
    //获取一个普通变量的类型信息
    int n = 1000;
    const type_info &nInfo = typeid(n);
    cout<<nInfo.name()<<" | "<<nInfo.hash_code()<<endl;
//    i | 140735573488988
// test bug hug
    
    //获取一个字面量的类型信息
    const type_info &dInfo = typeid(25.66);
    cout<<dInfo.name()<<" | "<<dInfo.hash_code()<<endl;
    //d | 140735573489063

    //获取一个对象的类型信息
    Base obj;
    const  type_info &objInfo = typeid(obj);
    cout<<objInfo.name()<<" | "<<objInfo.hash_code()<<endl;
    //4Base | 4294975248

    //获取一个类的类型信息
    const type_info &baseInfo = typeid(Base);
    cout<<baseInfo.name()<<" | "<<baseInfo.hash_code()<<endl;
    //4Base | 4294975248

    //获取一个结构体的类型信息
    const type_info &stuInfo = typeid(struct STU);
    cout<<stuInfo.name()<<" | "<<stuInfo.hash_code()<<endl;
    //3STU | 4294975254

    //获取一个普通类型的类型信息
    const type_info &charInfo = typeid(char);
    cout<<charInfo.name()<<" | "<<charInfo.hash_code()<<endl;
    //c | 140735573488943
    
    //获取一个表达式的类型信息
    const type_info &expInfo = typeid(20 * 45 / 4.5);
    cout<<expInfo.name()<<" | "<<expInfo.hash_code()<<endl;
   // d | 140735573489063

    
    
//    从本例可以看出，typeid 的使用非常灵活，它的操作数可以是普通变量、对象、内置类型（int、float等）、自定义类型（结构体和类），还可以是一个表达式。
//    
//    本例中还用到了 type_info 类的几个成员函数，下面是对它们的介绍：
//    name() 用来返回类型的名称。
//    raw_name() 用来返回名字编码（Name Mangling）算法产生的新名称。关于名字编码的概念，我们已在《C++函数编译原理和成员函数的实现》中讲到。
//    hash_code() 用来返回当前类型对应的 hash 值。hash 值是一个可以用来标志当前类型的整数，有点类似学生的学号、公民的身份证号、银行卡号等。不过 hash 值有赖于编译器的实现，在不同的编译器下可能会有不同的整数，但它们都能唯一地标识某个类型。
//    
//    遗憾的是，C++ 标准只对 type_info 类做了很有限的规定，不仅成员函数少，功能弱，而且各个平台的实现不一致。例如上面代码中的 name() 函数，nInfo.name()、objInfo.name()在 VC/VS 下的输出结果分别是int和class Base，而在 GCC 下的输出结果分别是i和4Base。

    
    
//    C++ 标准规定，type_info 类至少要有如下所示的 4 个 public 属性的成员函数，其他的扩展函数编译器开发者可以自由发挥，不做限制。
//    1) 原型：const char* name() const;
//    
//    返回一个能表示类型名称的字符串。但是C++标准并没有规定这个字符串是什么形式的，例如对于上面的objInfo.name()语句，VC/VS 下返回“class Base”，但 GCC 下返回“4Base”。
//    2) 原型：bool before (const type_info& rhs) const;
//    
//    判断一个类型是否位于另一个类型的前面，rhs 参数是一个 type_info 对象的引用。但是C++标准并没有规定类型的排列顺序，不同的编译器有不同的排列规则，程序员也可以自定义。要特别注意的是，这个排列顺序和继承顺序没有关系，基类并不一定位于派生类的前面。
//    3) 原型：bool operator== (const type_info& rhs) const;
//    
//    重载运算符“==”，判断两个类型是否相同，rhs 参数是一个 type_info 对象的引用。
//    4) 原型：bool operator!= (const type_info& rhs) const;
//    
//    重载运算符“!=”，判断两个类型是否不同，rhs 参数是一个 type_info 对象的引用。
//    关于运算符重载，我们将在《C++运算符重载》一章中详细讲解。
//    raw_name() 是 VC/VS 独有的一个成员函数，hash_code() 在 VC/VS 和较新的 GCC 下有效。
//    
//    可以发现，不像 Java、C# 等动态性较强的语言，C++ 能获取到的类型信息非常有限，也没有统一的标准，如同“鸡肋”一般，大部分情况下我们只是使用重载过的“==”运算符来判断两个类型是否相同。
    
    if (charInfo.operator!=(stuInfo)){
        cout << "not equal"<<endl;
    }
    
    
    ///////////////判断类型是否相等//////////
    char * str;
    int a = 2;
    int b = 4;
    float f;
    
    if(typeid(str).name() == typeid(f).name()){
    
    }else{
    
        if (typeid(a) == typeid(b)) {
            cout << "not equal"<<endl;
        }
    }
    
    Base obj1;
    Base * p1;
    Derived obj2;
    Derived *p2 = new Derived;
    p1 = p2;
    
    if (typeid(obj) == typeid(obj2)) {
        cout << "equal "<<endl;
    }
    
    
    
    

    return 0;
}
